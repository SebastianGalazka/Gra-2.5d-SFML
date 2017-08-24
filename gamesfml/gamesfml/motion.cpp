#include "stdafx.h"
#include "motion.h"

void Motion::SetPositionOfSprite()
{
	character.setPosition(100, 100);
}
void Motion::LoadSpritesAndSetSprite()
{
	if (!texture_of_character.loadFromFile("czolg.png"))
	{
		cout << "Wystapil problem z zaladowaniem grafiki." << endl;
	}
	character.setTexture(texture_of_character);
	SetPositionOfSprite();
}
