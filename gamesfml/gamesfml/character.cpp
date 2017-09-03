#include "stdafx.h"
#include "character.h"
#include "gamestate.h"

void Character::SetPositionOfSprite()
{
	character.setPosition(70, 200);
	character.setOrigin(character.getGlobalBounds().width / 2, character.getGlobalBounds().height / 2);
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