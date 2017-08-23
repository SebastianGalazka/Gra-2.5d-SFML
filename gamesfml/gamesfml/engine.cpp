#include "stdafx.h"
#include "engine.h"
#include "iostream"

sf::Vector2f ScreenToWorld(sf::Vector2f v)
{
return sf::Vector2f((v.x + 2.0f*v.y) / 4.0f, (2.0f*v.y - v.x) / 4.0f);
}
sf::Vector2f WorldToScreen(sf::Vector2f v)
{
	return sf::Vector2f(2.0f*v.x - 2.0f*v.y, v.x + v.y);
}

void Engine::runEngine(sf::RenderWindow& window)
{
	gameplay = GAME;
	Level level;
	level.LoadMap("level.txt");

	sf::View view = window.getDefaultView();
	view.setSize(view.getSize().x, view.getSize().y * 2);
	view.setCenter(level.sprite[level.height/2][level.width/2].texture.getPosition().x, level.sprite[10][10].texture.getPosition().y);
	window.setView(view);
	sf::Texture t;
	sf::Sprite s;
	t.loadFromFile("czolg.png");
	s.setTexture(t);
	//s.setPosition(WorldToScreen(sf::Vector2f(100,100)));
	//s.setPosition(ScreenToWorld(sf::Vector2f(100,100)));
	s.setPosition(100,100);


	while (gameplay == GAME)
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		window.clear();
		//IsometricMap(&window,view);
		for (int x = 0; x < level.height; x++)
		{
			for (int y = 0; y < level.width; y++)
			{
				window.draw(level.sprite[x][y].texture);
			}
		}
		window.draw(s);
		window.display();
	}
}