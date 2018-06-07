#include "Window.hpp"

Window::Window(int w, int h) :
	_width(w),
	_height(h)
{
	if (!glfwInit()) {
		exit(-1);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	/* Create a windowed mode window and its OpenGL context */
	_window = glfwCreateWindow(_width, _height, "OpenGL FrameWork", NULL, NULL);

	if (!_window) {
		glfwTerminate();
	}

	glfwMakeContextCurrent(_window);

	/* Make the window's context current */

	//glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK) {
		// Problem: glewInit failed, something is seriously wrong.
		std::cout << "glewInit failed, aborting." << std::endl;
	}

	printf("OpenGL %s, GLSL %s, Renderer %s\n", glGetString(GL_VERSION),
		glGetString(GL_SHADING_LANGUAGE_VERSION), glGetString(GL_RENDERER));

	glfwSwapInterval(0);  //enable vsync

	glfwSetWindowTitle(_window, "uCraft VULKAN");
}

Window::~Window()
{
}
