#pragma once
#include "SFML/Graphics.hpp"
#include "gamestate.h"
#include "map.h"

class Engine
{
public:
	const float FPS = 60;
	Clock clock;
	Time ElapsedTime;
	Time UpdateRate;

	Engine();
	void RunEngine(sf::RenderWindow& window);
	void IsometricMap(sf::RenderWindow *win, sf::View view);
	GamePlay gameplay;
};