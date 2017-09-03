#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace std;

class Character
{
public:
	sf::Texture texture_of_character;
	sf::Sprite character;
	void LoadSpritesAndSetSprites();
	void SetPositionOfSprite();
	enum Direction_of_Character {N,NE,E,SE,S,SW,W,NW};
	Direction_of_Character direction;
};