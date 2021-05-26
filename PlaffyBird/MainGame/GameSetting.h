#pragma once
#include <iostream>
#include "Screen.h"

class GameSetting
{
private:
	Screen* screenInfo;
public:
	
	GameSetting();
	int GetScreenWidth();
	int GetScreenHeight();
	char* GetScreenName();
};

