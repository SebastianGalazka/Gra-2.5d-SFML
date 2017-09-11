#include "stdafx.h"
#include "animation.h"


void Animation::UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character direction)
{
	
	time = clock.getElapsedTime();

	if (time.asMilliseconds() > 100 && time.asMilliseconds() < 200)
	{
		Frame++;
	}
	else if (time.asMilliseconds() > 300 && time.asMilliseconds() < 400)
	{
		Frame++;
	}
	else if (time.asMilliseconds() > 500 && time.asMilliseconds() < 600)
	{
		Frame++;
	}
	else if (time.asMilliseconds() > 700 && time.asMilliseconds() < 800)
	{
		Frame++;
	}
	else if (time.asMilliseconds() > 900 && time.asMilliseconds() < 1000)
	{
		Frame++;
	}
	else if (time.asMilliseconds() > 1100)
	{
		Frame = 1;
		clock.restart();
	}
	//enum Direction_of_Character { N, NE, E, SE, S, SW, W, NW };
	if (direction = N)
	{
		sprite.setTextureRect(sf::IntRect(Frame*150, 559, 150, 186));
	}
	else if (direction = NE)
	{
		sprite.setTextureRect(sf::IntRect(Frame * 150, 745, 150, 186));
	}
}