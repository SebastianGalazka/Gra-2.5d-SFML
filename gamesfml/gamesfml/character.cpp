#include "stdafx.h"
#include "character.h"

void Character::SetPositionOfSprite()
{
	character.setPosition(70, 200);
	direction = S;
}
void Character::LoadSpritesAndSetSprites()
{
	if (!texture_of_character.loadFromFile("swat1.png"))
	{
		cout << "Wystapil problem z zaladowaniem grafiki." << endl;
	}
	character.setTextureRect(sf::IntRect(0,0,92,163));
	character.setTexture(texture_of_character);
	SetPositionOfSprite();
}