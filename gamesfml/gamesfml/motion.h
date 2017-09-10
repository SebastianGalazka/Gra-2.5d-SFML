#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "gamestate.h"

using namespace std;
using namespace sf;

class Motion
{
public:
	int velocity=1.5;
	//void Move(sf::Sprite sprite);
	void Move(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction, Movement_Of_Character movement_of_character);
	void IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite, Direction_of_Character direction, Movement_Of_Character movement_of_character);
	void SetDirection(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction, Movement_Of_Character movement_of_character);
	void Shot(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction);
	void Run(Movement_Of_Character movement_of_character);
	int Rotation(sf::RenderWindow& window, sf::Sprite &sprite);

};