# Code Generation 

This section is about generating the vk sections of the VkClay includes directory.

Lets start with generating the vulkan headers, ie the contents of "vulkan/vulkan.h", thankfully we don't have to do that, we can just use the Vulkan-Headers repo, which is a submodule of this repo, they come pre generated. Just copy over the contents of "./Vulkan-Headers/include/vulkan" over to "VkClay/include/vkClay/vk/vulkan/" 
Don't forget to add the license for Vulkan Headers either!!

Next we generate the vkBindings, this uses a python script bindings. Simply run this script with the Vulkan-Header submodule up to date, and then you'll be all good. Copy over the files in "./vk" over to "VkClay/include/vkClay/vk"