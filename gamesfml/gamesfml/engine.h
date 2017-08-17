#pragma once
#include "SFML/Graphics.hpp"
#include "gamestate.h"
#include "map.h"

class Engine
{
public:
	void runEngine(sf::RenderWindow& window);
	GamePlay gameplay;
};