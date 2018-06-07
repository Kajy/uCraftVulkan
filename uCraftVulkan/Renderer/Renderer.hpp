#pragma once

#include <cstdlib>
#include <iostream>
#include "vulkan\vulkan.hpp"

class Renderer
{
public:
	Renderer();
	~Renderer();

private:
	void	InitInstance();
	void	DestroyInstance();


private:

	vk::Instance	_instance;

};