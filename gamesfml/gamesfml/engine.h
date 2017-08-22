#pragma once
#include "SFML/Graphics.hpp"
#include "gamestate.h"
#include "map.h"

class Engine
{
public:
	void runEngine(sf::RenderWindow& window);
	void IsometricMap(sf::RenderWindow *win, sf::View view);
	GamePlay gameplay;
};