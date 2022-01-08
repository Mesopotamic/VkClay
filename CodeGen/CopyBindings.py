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

import shutil

for fileName in Vulkan_Headers:
    print("Copying : " + fileName)
    shutil.copy(fileName, DirPath + "/../Include/VkClay/vk/Vulkan_Raw")

# Copy the bindings
shutil.copy(DirPath + "/vk/VkBinding.h", DirPath + "/../Include/VkClay/vk/VkBinding.h")
shutil.copy(DirPath + "/vk/VkStubs.c", DirPath + "/../Source/VkBindings/VkStubs.c")

# Copy the function loading stuff 
shutil.copy(DirPath + "/vk/VkFunctionLoading.c", DirPath + "/../Source/VkBindings/VkFunctionLoading.c")
shutil.copy(DirPath + "/vk/HashTable.h", DirPath + "/../Source/VkBindings/Extensions/HashTable.h")
shutil.copy(DirPath + "/vk/HashTable.c", DirPath + "/../Source/VkBindings/Extensions/HashTable.c")