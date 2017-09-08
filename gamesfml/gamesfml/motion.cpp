#include "stdafx.h"
#include "motion.h"


sf::Vector2f WorldToScreen(sf::Vector2f v)
{
	return sf::Vector2f(2.0f*v.x - 2.0f*v.y, v.x + v.y);
}
sf::Vector2f ScreenToWorld(sf::Vector2f v)
{
	return sf::Vector2f((v.x + 2.0f*v.y) / 4.0f, (2.0f*v.y - v.x) / 4.0f);
}
int Motion::Rotation(sf::RenderWindow& window, sf::Sprite &sprite)
{
	sf::Vector2f mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));
	sf::Vector2f position_of_character = sprite.getPosition();

	const float PI = 3.14159265;
	float a = position_of_character.x - mouse.x;
	float b = position_of_character.y - mouse.y;
	float rotation = (atan2(b, a)) * 180 / PI;

	return rotation + 180;
}
void Motion::SetDirection(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction, Movement_Of_Character movement_of_character)
{
	movement_of_character = STAND;
	if (movement_of_character == STAND)
	{
		if (direction == N)
		{
			sprite.setTextureRect(sf::IntRect(350, 0, 92, 173));
		}
		if (direction == S)
		{
			sprite.setTextureRect(sf::IntRect(0, 0, 92, 163));
		}
		if (direction == W)
		{
			sprite.setTextureRect(sf::IntRect(154, 0, 85, 175));
		};
		if (direction == E)
		{
			sprite.setTextureRect(sf::IntRect(505, 0, 86, 163));
		}
		if (direction == NW)
		{
			sprite.setTextureRect(sf::IntRect(239, 0, 111, 169));
		}
		if (direction == NE)
		{
			sprite.setTextureRect(sf::IntRect(442, 0, 63, 168));
		}
		if (direction == SE)
		{
			sprite.setTextureRect(sf::IntRect(591, 0, 111, 146));
		}
		if (direction == SW)
		{
			sprite.setTextureRect(sf::IntRect(92, 0, 62, 177));
		}

	}
}
void Motion::Move(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction, Movement_Of_Character movement_of_character)
{
	SetDirection(window, sprite, direction, movement_of_character);
}
void Motion::IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite, Direction_of_Character direction)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		direction = N;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		direction = S;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		direction = W;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		direction = E;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		direction = NW;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		direction = NE;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		direction = SW;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		direction = SE;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		exit(1);
	}
}
void Motion::Shot(sf::RenderWindow& window, sf::Sprite &sprite, Direction_of_Character direction)
{
	cout << Rotation(window, sprite) << endl;
	int rotation = Rotation(window, sprite);

	if (rotation >= 280 || rotation <= 350)
	{
		direction = N;
	}
	if (rotation >= 350 || rotation <= 10)
	{
		direction = NE;
	}
	if (rotation >= 11 && rotation <= 79)
	{
		direction = E;
	}
	if (rotation >= 80 && rotation <= 109)
	{
		direction = SE;
	}
	if (rotation >= 110 && rotation <= 169)
	{
		direction = S;
	}
	if (rotation >= 170 && rotation <= 189)
	{
		direction = SW;
	}
	if (rotation >= 190 && rotation <= 259)
	{
		direction = W;
	}
	if (rotation >= 260 && rotation <= 279)
	{
		direction = NW;
	}
}
