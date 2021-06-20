#pragma once
#include <vector>
#include "Component.h"

class Scene
{
private:
	std::vector<Component> vComponent;
public:
	void ProcessInput();
	void FixedUpdate();
	void Update();
	void Render();
};

