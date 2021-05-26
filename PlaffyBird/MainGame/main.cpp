#include <iostream>
#include "OpenGL.h"
#include "GameSetting.h"

int main()
{
	GameSetting setting;

	if (!OpenGL::instance().Init())
		return 1;

	return 0;
}