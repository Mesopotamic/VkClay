# Bindings generator, this processes the Vulkan registry and turns it into bindings for us to use 
# We basically automatically fetch the function pointers 

#
# Start by attempting to validate the user input
#

# Check if the user has passed enough command line arguments 
import os
import sys
if len(sys.argv) < 2:
    print("You haven't parsed enough command line arguments, this script needs the file path to the registry")
    exit()

# check if the user has parsed an actual file
import os.path
xmlPath = sys.argv[1]
if not os.path.isfile(xmlPath):
    print("Could not follow file path :", xmlPath)
    exit()

# Now check if the file found is an xml file 
if not xmlPath.endswith(".xml"):
    print("The file path does not point to an xml file :", xmlPath)
    exit()

# We need to check that our output directory exists
if not os.path.exists("vk"):
    os.makedirs("vk")


#
# Prepare the top part of the files
#


# Write out the header guard for the Main Vulkan bindings function
vkHeaderText = "// This was auto generated as part of the Vulkan bindings, so we can dynamically load Vulkan\n" 
vkHeaderText += "#ifndef __VK_CLAY_BINDINGS_H__\n#define __VK_CLAY_BINDINGS_H__\n"
vkHeaderText += "#define VK_NO_PROTOTYPES\n#include \"Vulkan_Raw/vulkan.h\"\n\n"
vkHeader = open("vk/VkBinding.h", "w")
vkHeader.write(vkHeaderText)
vkHeaderText = ""

# Write out to the stubs, these are functions that stop us from getting unresolved externals
# As well as stopping the user from getting nullptr exceptions
VkStubText = "// Auto generated as part of the Vulkan bindings, provides stubs\n"
VkStubText += "#include \"VkClay/vk/VkBinding.h\"\n#include <stdio.h>\n\n"
vkStubs = open("vk/VkStubs.c", "w")
vkStubs.write(VkStubText)
VkStubText = ""

# Now we also have to have function loading, there are a couple of different
# things we have to handle, Null instance, which is used for creating an instance
# Then loading the core functionality and then loading extensions
funcTextSource = "// Auto generated as part of the Vulkan bindings\n"
funcTextSource += "#include \"VkClay/vk/VkBinding.h\""

# We now know for sure that the user has passed an xml file
# So we can start processing it as if it was an xml
print("Processing Registry ...")


#
# Process the core elements of the xml
#


import xml.etree.ElementTree as et
xmlTree = et.parse(xmlPath)
xmlRoot = xmlTree.getroot()

# Get the part of the tree that lists all of the Vulkan functions
commandRoot = xmlRoot.findall("./commands/command")

# create a dictionary that associates the function name with the 
# corresponding section inside ./commands/command
func_name_dict = {}
for command in commandRoot:
    functionName = command.find("./proto/name")
    if functionName is None:
        continue
    # Store the function details for look up later
    func_name_dict[functionName.text] = command

# We Need to be able to tell if a function is instance level or device level
# it is determined by the first paramater, It has to be either vkDevice, or a child of vkDevice 
# [@category='handle']/*
allTypes = xmlRoot.findall("./types/type")
type_dict = {}
for type in allTypes:
    typeName = type.tag.find("name")
    if type.get("name") == "VkInstance":
        type_dict["VkInstance"] = "Instance"
    elif type.get("name") == "VkDevice":
        type_dict["VkDevice"] = "device"
    else:
        # Search for the parent
        parent = type.get("parent")
        #while parent != "VkDevice" and parent != "VkInstance":
            #parent = xmlRoot.find("./types/type/[@name='" + parent +"']")


#
# For each Vulkan function we need to declare a function pointer in the header
# as well as a stub function that allows users to avoid null pointer throws
#
def make_header_and_stub(functionName):
    global vkHeaderText
    global VkStubText

    # Find the xml root for this function by looking it up in the dictionary
    command = func_name_dict[functionName]
    if command is None:
        print("Unfound command" + functionName)
        return

    # Get all the named types we might need
    returnType = command.find("./proto/type").text
    params = command.findall("./param")

    # We can now process the function name in the header
    vkHeaderText += "/**\n * @brief " + functionName + "\n *"

    # Add the Function definition in the stub
    VkStubText += "VKAPI_ATTR " + returnType + " VKAPI_CALL stub_" + functionName + "( " 

    # Process the paramaters this function takes
    for param in params:
        # param name
        paramName = param.find("./name").text

        # Is the paramater const?
        if "const" in str(param.text):
            VkStubText += "const "
        
        # paramater type
        paramType = param.find("type").text
        VkStubText += paramType

        vkHeaderText += " @param " + paramName + " "
        
        # If paramater is a pointer
        if param.find("./*") is not None :
            vkHeaderText += "Pointer to "
            VkStubText += "*"

        vkHeaderText += paramType + "\n *"
        VkStubText += " " + paramName + ", "

    # Finished the paramaters 
    VkStubText = VkStubText[:-2] + ")\n{\n\tprintf(\"Not connected " + functionName + " to a function pointer\");\n"

    if returnType =="PFN_vkVoidFunction":
        vkHeaderText += " @returns PFN_vkVoidFunction function pointer \n *"
        VkStubText += "\treturn NULL;"
    elif returnType == "VkBool32":
        vkHeaderText += " @ returns VkBool32 VK_TRUE if true, else VK_FALSE \n *"
        VkStubText += "\treturn VK_FALSE;"
    elif returnType == "VkResult":
        vkHeaderText += " @returns VkResult, "
        VkStubText += "\treturn VK_SUCCESS;"
        # do we have success codes?
        successcode = command.attrib.get('successcodes')
        failcode = command.attrib.get('errorcodes')
        if successcode is None:
            successcode = "Not in XMLs"
        if failcode is None:
            failcode = "None"
        successcode = successcode.replace(",", ", ")
        failcode = failcode.replace(",", ", ")
        vkHeaderText += "Success codes : " + successcode + ", Error Codes : " + failcode
        vkHeaderText+= "\n *"
    elif returnType == "VkDeviceAddress":
        vkHeaderText += " @returns VkDeviceAddress\n *"
        VkStubText += "\treturn (VkDeviceAddress) -1;"
    elif returnType == "uint64_t":
        vkHeaderText += " @returns VkDeviceAddress\n *"
        VkStubText += "\treturn (uint64_t) -1;"
    elif returnType != "void":
        vkHeaderText += " @returns " + returnType + "\n *"
        VkStubText += "\treturn VK_NULL_HANDLE;"
    vkHeaderText += "/\n"
    VkStubText += "\n}"
    VkStubText += ("\nPFN_" + functionName + " " + functionName +
                    " = (PFN_" + functionName + ")stub_" + functionName + "; \n\n")
    # end the comments
        
    vkHeaderText += "extern PFN_" + functionName + " " + functionName + ";\n\n"
    print(command.tag, ":", functionName)
    

# String for initialising all the different functions
nullInstance = "void loadGlobalVulkanFunctions(void)\n{\n"
coreInstance1_0 = "void loadInstance1_0_PFN(VkInstance instance)\n{\n"
coreDevice1_0 = "void loadDevice1_0_PFN(VkInstance instance)\n{\n"
coreInstance1_1 = "void loadInstance1_1_PFN(VkInstance instance)\n{\n"
coreDevice1_1 = "void loadDevice1_1_PFN(VkInstance instance)\n{\n"
coreInstance1_2 = "void loadInstance1_2_PFN(VkInstance instance)\n{\n"
coreDevice1_2 = "void loadDevice1_2_PFN(VkInstance instance)\n{\n"

# Loop through all of the different API versions 
for apiversion in xmlRoot.findall("./feature"):
    if not apiversion.attrib.get("number") is None:
        vkHeaderText += "\n\n// Vulkan " + apiversion.attrib.get("number") + " Fuction Declarations\n\n"
        Vulkan_Commands = apiversion.findall("./require/command")
        for command in Vulkan_Commands:
            name = command.attrib["name"]
            if name is None:
                continue
            
            # now look up the command 
            functionFound = func_name_dict[name]
            if functionFound is None:
                print("Unfound command" + name)
                continue

            # Add a decleration and stub definition
            make_header_and_stub(name)

            # For now we're going to use instance proc addr instead
            # But ideally we should use device proc addr
            # But I need to find out the way to tell if a function 
            # is device or instance
            pfn = ("\t" + name + " = (PFN_" + name + ")vkGetInstanceProcAddr(instance, \"" + 
            name + "\");\n")

            # Place this string in the right function
            apiNumber = apiversion.attrib.get("number")
            if "1.0" in apiNumber:
                coreInstance1_0 += pfn
            elif "1.1" in apiNumber:
                coreInstance1_1 += pfn
            elif "1.2" in apiNumber:
                coreInstance1_2 += pfn
            else:
                print("Unknown API version", apiNumber)                


            
# Done with the loop
        
# Now we need to fetch the global commands, these are the ones that 
# are required in order first create the instance
# I couldn't spot them in the xml, but they seem to be never changing so 
# we'll hard code them here
globalCommands = ["vkEnumerateInstanceVersion", "vkEnumerateInstanceExtensionProperties",
"vkEnumerateInstanceLayerProperties", "vkCreateInstance"]
for command in globalCommands:
    if command == "vkGetInstanceProcAddr":
        continue
    nullInstance += ("\t" + command + 
    " = (PFN_" + command + ")vkGetInstanceProcAddr(NULL, \"" + 
    command + "\");\n")

# Write out the function declarations
vkHeader.write(vkHeaderText)
vkStubs.write(VkStubText)
vkStubs.close()
vkHeader.write("\n#endif")
vkHeader.close()


# End the function pointer finders
nullInstance += "\n}\n"
coreInstance1_0 += "\n}\n"
coreDevice1_0 += "\n}\n"
coreInstance1_1 += "\n}\n"
coreDevice1_1 += "\n}\n"
coreInstance1_2 += "\n}\n"
coreDevice1_2 += "\n}\n"
 
# Concatinate these all together into one file
funcTextSource += "\n" + nullInstance + "\n" + coreInstance1_0 + "\n" + coreDevice1_0
funcTextSource += "\n" + coreInstance1_1 + "\n" + coreDevice1_1 + "\n" + coreInstance1_2 + "\n" + coreDevice1_2

# Write out the function pointer finding code 
funcText = open("vk/VkFunctionLoading.c", "w")
funcText.write(funcTextSource)
funcText.close()


#
# Now start processing the extensions
#

# define a hash function, it has to be identical to the one used in our code
# in this case we're using FNV-1a because it's simple
import numpy as np
np.warnings.filterwarnings('ignore', 'overflow') # We actually want overflows in our hashing
fnv_offset_basis = np.uint64(14695981039346656037)
fnv_prime = np.uint64(1099511628211)

def fnv_hash(stringkey):
    result = fnv_offset_basis
    for c in stringkey:
        result = np.bitwise_xor(result, np.uint64(ord(c)))
        result *= fnv_prime
    return result 

extensionlist = xmlRoot.findall("./extensions/extension")
tableSize = len(extensionlist)

# Create the table as it is filled in
extensionTable = [None] * tableSize

# Get the correct index for each element in the list
for ext in extensionlist:
    extname = ext.get("name")
    index = fnv_hash(extname)
    index = int(index % tableSize)

    # find the next empty space
    while extensionTable[index] is not None:
        index = (index + 1) % tableSize
    
    # Now place the entry in the table
    extensionTable[index] = ext

# Place holder text for the extension table
tableHeaderText = ("#ifndef __HASH_TABLE_HEADER_H__\n"
    "#define __HASH_TABLE_HEADER_H__\n\n"
    "#include \"VkClay/VkClay.h\"\n"
    "#define HASH_TABLE_SIZE (" + str(int(tableSize)) + ")\n"
    "extern const vkc_ExtensionProps vkExtensionLookupTable[HASH_TABLE_SIZE];\n"
    "\n#endif")
table = open("vk/HashTable.h", "w")
table.write(tableHeaderText)
table.close()

tableSourceText = ("#include \"HashTable.h\"\n"
    "const vkc_ExtensionProps vkExtensionLookupTable[HASH_TABLE_SIZE] = {\n")

for ext in extensionTable:
    extname = ext.get("name")
    tableSourceText += ("\t{\n\t\t\"" + str(extname) + "\",\n"
        "\t\t\"" + str(ext.get("type")) + "\",\n"
        "\t},\n")
tableSourceText = tableSourceText[:-2] + "\n};"

table = open("vk/HashTable.c", "w")
table.write(tableSourceText)
table.close()

    