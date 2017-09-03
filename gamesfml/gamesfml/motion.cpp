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
void Motion::Direction()
{

}
void Motion::Move(sf::Sprite &sprite, sf::Time lastframe, std::string direction)
{	
	int newX = sprite.getPosition().x + (0 * velocity);
	int newY = sprite.getPosition().y + (0 * velocity);
	sf::Vector2f v = WorldToScreen(sf::Vector2f(newX, newY));
	cout << v.x << " " << v.y << endl;
	if (direction == "N")
	{
		//sprite.move(velocity*v.x, velocity*v.y);
		sprite.setTextureRect(sf::IntRect(350, 0, 92, 173));
	}
	if (direction == "S")
	{
		//sprite.move(velocity*v.x, velocity*v.y);
		sprite.setTextureRect(sf::IntRect(0, 0, 92, 163));
	}
	if (direction == "W")
	{
		sprite.setTextureRect(sf::IntRect(154, 0, 85, 175));
	};
	if (direction == "E")
	{
		sprite.setTextureRect(sf::IntRect(505, 0, 86, 163));
	}
	if (direction == "NW")
	{
		sprite.setTextureRect(sf::IntRect(505, 0, 86, 163));
	}
}
void Motion::IsMoveKeyPressed(sf::Event event, sf::Sprite &sprite, sf::Time lastframe)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		Move(sprite, lastframe, "N");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		Move(sprite, lastframe, "S");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		Move(sprite, lastframe, "W");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		Move(sprite, lastframe, "E");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		Move(sprite, lastframe, "NW");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		Move(sprite, lastframe, "NE");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		Move(sprite, lastframe, "SW");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		Move(sprite, lastframe, "SE");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		exit(1);
	}
}

