#pragma once

#include <iostream>
#include <string>

#include <GL/glew.h>
#include <GLFW/glfw3.h>



class Window {
public:
	Window(int w, int h);
	~Window();

	void setSize(int w, int h) {
		_height = h;
		_width = w;
	}

	int			getWidth() const { return _width; }
	int			getHeight() const { return _height; }

	GLFWwindow	*getGLFWwindow() const { return _window; }

private:
	GLFWwindow		*_window;

	int				_width;
	int				_height;
	int				setup();

	int				display_w;
	int				display_h;
};
