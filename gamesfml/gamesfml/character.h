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
};