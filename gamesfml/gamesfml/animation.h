#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "gamestate.h"

class Animation
{
	sf::Clock clock;
	sf::Time time;
	void UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character direction);
};