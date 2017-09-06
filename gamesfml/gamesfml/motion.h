#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace std;
using namespace sf;

class Motion
{
public:
	int velocity=1.5;
	//void Move(sf::Sprite sprite);
	void Move(sf::Sprite &sprite, enum Direction_Of_Character direction);
	void IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite);
	void SetDirection(sf::RenderWindow& window, sf::Sprite &sprite);
	int Rotation(sf::RenderWindow& window, sf::Sprite &sprite);
};