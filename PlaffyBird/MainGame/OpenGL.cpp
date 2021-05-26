#include "OpenGL.hpp"
#include <stdio.h>

class OpenGL
{
private:
	OpenGL()
	{

	}

public:
	static OpenGL& instance()
	{
		static OpenGL* instance = new OpenGL();
		return *instance;
	}
	
	bool Init()
	{
		if (!glfwInit())
		{
			printf("GLFW initialization failed!\n");
			glfwTerminate();
			return 1;
		}

		// Setup GLFW window properties
		// OpenGL version
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		// Core profile - No Backwards Compatibility
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		// Allow forward compatibility
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

		GLFWwindow* mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test Window", NULL, NULL);
		if (!mainWindow)
		{
			printf("GLFW window creation failed!\n");
			glfwTerminate();
			return 1;
		}

		// Get Buffer size information
		int bufferWidth, bufferHeight;
		glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

		// Set context for GLEW to use
		glfwMakeContextCurrent(mainWindow);

		// Allow modern extension features
		glewExperimental = GL_TRUE;

		if (glewInit() != GLEW_OK)
		{
			printf("GLEW initialization failed!\n");
			glfwDestroyWindow(mainWindow);
			glfwTerminate();
			return 1;
		}

		// Setup Viewport size
		glViewport(0, 0, bufferWidth, bufferHeight);
	}
};