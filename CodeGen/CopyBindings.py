# This script is designed to simplify the proceess of copying the
# bindings into the source tree once the binding generators has been 
# finalised 

# First Get the location of the current directory
import os
DirPath = os.path.dirname(os.path.abspath(__file__))
print("Using directory path : " + DirPath)

# Run the bindings generator making it use the registry in the submodule
# Do this by spawning another shell process (Sorry)
os.system("python Binding.py "+ DirPath + "/Vulkan-Headers/registry/vk.xml")

# Now copy the results 
import glob
Vulkan_Headers = glob.glob(DirPath + "/Vulkan-Headers/include/vulkan/*.h")
Binding_Headers = glob.glob(DirPath + "/vk/*.h")
Binding_SRC = glob.glob(DirPath + "/vk/*.c")

import shutil

for fileName in Vulkan_Headers:
    print("Copying : " + fileName)
    shutil.copy(fileName, DirPath + "/../Include/VkClay/vk/Vulkan_Raw")

for fileName in Binding_Headers:
    print("Copying : " + fileName)
    shutil.copy(fileName, DirPath + "/../Include/VkClay/vk")

for fileName in Binding_SRC:
    print("Copying : " + fileName)
    shutil.copy(fileName, DirPath + "/../Source/VkBindings")