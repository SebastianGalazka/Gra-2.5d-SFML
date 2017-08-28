#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace std;

class Motion
{
public:
	int velocity=1.5;
	void Move(sf::Sprite sprite);
	void IsMoveKeyPressed(sf::Event event, sf::Sprite sprite);
};