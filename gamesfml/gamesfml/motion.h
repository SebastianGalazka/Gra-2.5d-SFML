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
	void Move(sf::Sprite &sprite);
	void IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite);
	void SetDirection(sf::RenderWindow& window, sf::Sprite &sprite);
	int Rotation(sf::RenderWindow& window, sf::Sprite &sprite);
	typedef enum {
		N, NE, E, SE, S, SW, W, NW
	} Direction_of_Character;
	Direction_of_Character direction = N;
};