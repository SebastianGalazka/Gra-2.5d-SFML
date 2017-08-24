#include "stdafx.h"
#include "engine.h"
#include "motion.h"
#include "iostream"

void Engine::runEngine(sf::RenderWindow& window)
{
	gameplay = GAME;
	Motion motion;
	motion.LoadSpritesAndSetSprite();
	Level level;
	level.LoadMap("level.txt");

	sf::View view = window.getDefaultView();
	//view.setSize(view.getSize().x, view.getSize().y * 2);
	view.setCenter(level.sprite[level.height / 2][level.width / 2].texture.getPosition().x, level.sprite[level.height / 2][level.width / 2].texture.getPosition().y);
	window.setView(view);


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
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
				{
					exit(1);
				}
				break;

			default:
				break;
			}
		}
		window.clear();
		for (int x = 0; x < level.height; x++)
		{
			for (int y = 0; y < level.width; y++)
			{
				window.draw(level.sprite[x][y].texture);
			}
		}
		window.draw(motion.character);
		window.display();
	}
}
