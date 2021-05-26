#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>

class OpenGL
{
public:
	OpenGL();
	static OpenGL& instance();
	bool Init();
	bool GLFWInit();
	bool GLEWInit();
};