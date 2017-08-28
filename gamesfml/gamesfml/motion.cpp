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
void Motion::Move(sf::Sprite &sprite, sf::Time lastframe, std::string direction)
{	
	int newX = sprite.getPosition().x + (0 * velocity);
	int newY = sprite.getPosition().y + (0 * velocity);
	sf::Vector2f v = WorldToScreen(sf::Vector2f(newX, newY));
	cout << v.x << " " << v.y << endl;
	if (direction == "up")
	{
		sprite.move(velocity*v.x, velocity*v.y);
	}
	if (direction == "down")
	{
		sprite.move(velocity*v.x, velocity*v.y);
	}
	if (direction == "left")
	{
		
	};
	if (direction == "right")
	{
		
	}
}
void Motion::IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite, sf::Time lastframe)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		Move(sprite, lastframe, "up");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		Move(sprite, lastframe, "down");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		Move(sprite, lastframe, "left");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		Move(sprite, lastframe, "right");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		exit(1);
	}
}

