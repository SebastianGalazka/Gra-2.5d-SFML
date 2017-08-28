#include "stdafx.h"
#include "character.h"

void Character::SetPositionOfSprite()
{
	character.setPosition(100, 100);
}
void Character::LoadSpritesAndSetSprites()
{
	if (!texture_of_character.loadFromFile("czolg.png"))
	{
		cout << "Wystapil problem z zaladowaniem grafiki." << endl;
	}
	character.setTexture(texture_of_character);
	SetPositionOfSprite();
}