#include "stdafx.h"
#include "engine.h"
#include "iostream"


void Engine::runEngine(sf::RenderWindow& window)
{
	gameplay = GAME;
	Level level;
	level.LoadMap("level.txt");
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
		/*
		for (int x = 0; x < level.height; x++)
		{
			for (int y = 0; y < level.width; y++)
			{
				window.draw(level.map[x][y]);
			}
		}
		*/
	
		window.display();
	}
}