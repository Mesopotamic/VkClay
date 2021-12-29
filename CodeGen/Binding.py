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

# Write out the header guard for the Main Vulkan bindings function
vkHeaderText = "// This was auto generated as part of the Vulkan bindings, so we can dynamically load Vulkan\n" 
vkHeaderText += "#ifndef __VK_CLAY_BINDINGS_H__\n#define __VK_CLAY_BINDINGS_H__\n"
vkHeaderText += "#define VK_NO_PROTOTYPES\n#include \"Vulkan_Raw/vulkan.h\"\n\n"
vkHeader = open("vk/vkBinding.h", "w")
vkHeader.write(vkHeaderText)
vkHeaderText = ""

# Write out to the stubs, these are functions that stop us from getting unresolved externals
# As well as stopping the user from getting nullptr exceptions
VkStubText = "// Auto generated as part of the Vulkan bindings, provides stubs\n"
VkStubText += "#include \"VkClay/vk/vkBinding.h\"\n#include <stdio.h>\n\n"
vkStubs = open("vk/VkStubs.c", "w")
vkStubs.write(VkStubText)
VkStubText = ""

# We now know for sure that the user has passed an xml file
# So we can start processing it as if it was an xml
print("Processing Registry ...")

#
# Start processing the XML 
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

    func_name_dict[functionName.text] = command


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
    elif returnType != "void":
        vkHeaderText += " @returns " + returnType + "\n *"

    vkHeaderText += "/\n"
    VkStubText += "\n}"
    VkStubText += "\nPFN_" + functionName + " " + functionName + " = stub_" + functionName + "; \n\n"
    # end the comments
        
    vkHeaderText += "extern PFN_" + functionName + " " + functionName + ";\n\n"
    print(command.tag, ":", functionName)
    

# Try runnnig this code for vkcreateInstance
make_header_and_stub("vkGetInstanceProcAddr")
make_header_and_stub("vkCreateInstance")


# Write out the function declarations
vkHeader.write(vkHeaderText)

vkStubs.write(VkStubText)
vkStubs.close()

# Got to the end of the main vk bindings so lets append the end of the header guard
vkHeader.write("\n#endif")
vkHeader.close()

