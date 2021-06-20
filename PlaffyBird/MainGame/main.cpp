#include <iostream>
#include "OpenGL.h"

#define WIDTH 800
#define HEIGHT 600
#define NAME "PlaffyBird"

void GameLoop();

int main()
{
	if (!OpenGL::instance().Init(WIDTH, HEIGHT, NAME))
		return 1;
	

	GameLoop();

	return 0;
}

void GameLoop()
{
}