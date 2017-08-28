#include "stdafx.h"
#include "motion.h"

void Motion::Move(sf::Sprite sprite)
{
	float rotation = sprite.getRotation();
	float vx = sin((rotation * 3.14) / 180.0f);
	float vy = -cos((rotation * 3.14) / 180.0f);
	//sprite.move(velocity*vx, velocity*vy);
	sprite.move(100, 100);
	
}
void Motion::IsMoveKeyPressed(sf::Event event, sf::Sprite sprite)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		cout << "trybi" << endl;
		velocity = 100;
		Move(sprite);
		sprite.move(10, 10);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		velocity = -100;
		Move(sprite);
	}
}

