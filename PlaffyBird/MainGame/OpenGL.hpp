#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

class OpenGL
{
public:
	OpenGL();
	static OpenGL& instance();
	bool Init(int width, int height, std::string name);
	bool GLFWInit();
	bool GLEWInit();
};