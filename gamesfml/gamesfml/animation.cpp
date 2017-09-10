#include "stdafx.h"
#include "animation.h"


void Animation::UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character direction)
{
	time = clock.getElapsedTime();

	if (time.asMilliseconds() > 100)
	{
		if (direction = N)
		{
			sprite.setTextureRect(sf::IntRect(0,544,97,185));
		}
	}
	else if (time.asMilliseconds() > 300)
	{
		if (direction = N)
		{
			sprite.setTextureRect(sf::IntRect(97, 544, 97, 185));
		}
	}
	else if (time.asMilliseconds() > 600)
	{

	}
	else if (time.asMilliseconds() > 300)
	{

	}
}