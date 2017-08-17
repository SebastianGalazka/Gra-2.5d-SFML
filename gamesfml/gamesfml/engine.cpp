#include "engine.h"
#include "iostream"

void Engine::runEngine()
{
	while (gameplay == GAME)
	{
		Level level;
		level.LoadMap("level.txt");
	}
}