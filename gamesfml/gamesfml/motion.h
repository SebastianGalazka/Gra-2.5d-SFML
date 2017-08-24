#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace std;

class Motion
{
public:
	sf::Texture texture_of_character;
	sf::Sprite character;

	void LoadSpritesAndSetSprite();
	void SetPositionOfSprite();
};