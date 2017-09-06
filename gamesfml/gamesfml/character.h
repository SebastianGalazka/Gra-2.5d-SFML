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
	typedef enum {STAND, RUSH, SHOT} Movement_Of_Character;
	Movement_Of_Character movement_of_character = STAND;
	typedef enum { N, NE, E, SE, S, SW, W, NW } Direction_of_Character;
	Direction_of_Character direction = N;
};