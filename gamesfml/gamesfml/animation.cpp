#include "stdafx.h"
#include "animation.h"

void Animation::MoveCharacter(sf::Sprite &sprite, Direction_of_Character &direction)
{
	time = clock.getElapsedTime();

	if (time.asMilliseconds() > 50)
	{
		FrameMove++;
		clock.restart();
	}
	if (FrameMove >= 6)
	{
		FrameMove = 1;
		clock.restart();
	}
	if (direction == N)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 279, 75, 93));
	}
	else if (direction == NE)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 372, 75, 93));
	}
	else if (direction == E)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 465, 75, 93));
	}
	else if (direction == SE)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 559, 75, 93));
	}
	else if (direction == S)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 652, 75, 93));
	}
	else if (direction == SW)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 0, 75, 93));
	}
	else if (direction == W)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 93, 75, 93));
	}
	else if (direction == NW)
	{
		sprite.setTextureRect(sf::IntRect(FrameMove * 75, 186, 75, 93));
	}
}
void Animation::ReloadWeapon(sf::Sprite &sprite, Direction_of_Character &direction, Movement_Of_Character &movement_of_character)
{
	if (FrameReload >= 2)
	{
		movement_of_character = RELOAD;
	}
	if (movement_of_character == RELOAD)
	{
		time = clock.getElapsedTime();

		if (time.asMilliseconds() > 40)
		{
			FrameReload++;
			clock.restart();
		}
		if (FrameReload >= 7)
		{
			FrameReload = 1;
			movement_of_character = STAND;
			clock.restart();
		}
		
		if (direction == N)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 2245, 250, 250));
		}
		else if (direction == NE)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 745, 250, 250));
		}
		else if (direction == E)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 931, 250, 250));
		}
		else if (direction == SE)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 1118, 250, 250));
		}
		else if (direction == S)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 1305, 250, 250));
		}
		else if (direction == SW)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 0, 250, 250));
		}
		else if (direction == W)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 186, 250, 250));
		}
		else if (direction == NW)
		{
			sprite.setTextureRect(sf::IntRect(FrameReload * 250, 372, 250, 250));
		}
	}
}
void Animation::UpdateFrameOfCharacter(sf::Sprite &sprite, Direction_of_Character &direction)
{
	MoveCharacter(sprite, direction);
}