#include "stdafx.h"
#include "animation.h"


void Animation::UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character &direction)
{
	time = clock.getElapsedTime();

	if (time.asMilliseconds() > 50)
	{
		Frame++;
		clock.restart();
	}
	if (Frame>=6)
	{
		Frame = 1;
		clock.restart();
	}
	if (direction == N)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 559, 150, 186));
	}
	else if (direction == NE)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 745, 150, 186));
	}
	else if (direction == E)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 931, 150, 186));
	}
	else if (direction == SE)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 1118, 150, 186));
	}
	else if (direction == S)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 1305, 150, 186));
	}
	else if (direction == SW)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 0, 150, 186));
	}
	else if (direction == W)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 186, 150, 186));
	}
	else if (direction == NW)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 372, 150, 186));
	}
}