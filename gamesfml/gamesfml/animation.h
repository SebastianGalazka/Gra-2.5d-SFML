#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "gamestate.h"

class Animation
{
public:
	sf::Clock clock;
	sf::Time time;
	int FrameMove = 1, FrameReload = 1;;

	void UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character &direction);
	void MoveCharacter(sf::Sprite &sprite, Direction_of_Character &direction);
	void ReloadWeapon(sf::Sprite &sprite, Direction_of_Character &direction, Movement_Of_Character &movement_of_character);
};