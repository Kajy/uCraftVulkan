// uCraftVulkan.cpp : Defines the entry point for the application.
//
#include "vulkan\vulkan.h"

#include "uCraftVulkan.h"
#include "Window\Window.hpp"
#include "Renderer\Renderer.hpp"

using namespace std;

int main()
{
	Window		win(1280, 720);
	GLFWwindow	*window = win.getGLFWwindow();
	Renderer	renderer;

	while (!glfwWindowShouldClose(window))
	{

	}

	return 0;
}
