#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "gamestate.h"

class Animation
{
public:
	sf::Clock clock;
	sf::Time time;
	int Frame = 1;
	void UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character &direction);
};