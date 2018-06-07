#include "Renderer.hpp"

Renderer::Renderer()
{
	_instance = nullptr;
	InitInstance();
}

Renderer::~Renderer()
{
	DestroyInstance();
}

void		Renderer::InitInstance()
{
	//vk::ApplicationInfo		appInfos;
	//vk::InstanceCreateInfo	instanceInfos;

	////appInfos.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	//appInfos.apiVersion = VK_API_VERSION_1_1;
	//appInfos.applicationVersion = VK_MAKE_VERSION(0, 1, 1);
	//appInfos.pApplicationName = "uCraft";

	//instanceInfos.setFlags
	//instanceInfos.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;


	vk::ApplicationInfo appInfo = vk::ApplicationInfo()
		.setPApplicationName("Vulkan C++ Program Template")
		.setApplicationVersion(1)
		.setPEngineName("LunarG SDK")
		.setEngineVersion(1)
		.setApiVersion(VK_API_VERSION_1_0);

	// VkInstanceCreateInfo is where the programmer specifies the layers and/or extensions that
	// are needed. For now, none are enabled.
	vk::InstanceCreateInfo instInfo = vk::InstanceCreateInfo()
		.setFlags(vk::InstanceCreateFlags())
		.setPApplicationInfo(&appInfo)
		.setEnabledExtensionCount(0)
		.setPpEnabledExtensionNames(NULL);

	_instance = vk::createInstance(instInfo);
	////instanceInfos.pApplicationInfo = &appInfos;
	//VkResult err = vkCreateInstance(&instanceInfos, nullptr, &_instance);
	//if (VK_SUCCESS != err) {
	//	std::exit(EXIT_FAILURE);
	//}
}

void		Renderer::DestroyInstance()
{
	//vkDestroyInstance(_instance, nullptr);
	//_instance = nullptr;
}