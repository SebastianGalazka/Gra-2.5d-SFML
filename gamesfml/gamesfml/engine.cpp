#include "stdafx.h"
#include "engine.h"
#include "motion.h"
#include "character.h"
#include "iostream"

Engine::Engine()
{
}
void Engine::GameLoop()
{
	if (ElapsedTime.asSeconds() > (1.f / FPS))
	{
		clock.restart();
		ElapsedTime = Time::Zero;
	}
	ElapsedTime = clock.getElapsedTime();
}
void Engine::RunEngine(sf::RenderWindow& window)
{
	gameplay = GAME;
	Motion motion;
	Character character;
	Level level;
	Direction_of_Character direction = N;
	Movement_Of_Character movement_of_character = STAND;
	character.LoadSpritesAndSetSprites();
	level.LoadMap("level.txt");

	sf::View view = window.getDefaultView();
	//view.setSize(view.getSize().x, view.getSize().y * 2);
	//view.setCenter(level.sprite[level.height / 2][level.width / 2].texture.getPosition().x, level.sprite[level.height / 2][level.width / 2].texture.getPosition().y);
	view.setCenter(character.character.getPosition());
	window.setView(view);

	while (gameplay == GAME)
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			motion.IsMoveKeyPressed(event, character.character, direction);
		}
		GameLoop();
		motion.Move(window, character.character, direction, movement_of_character);
		window.clear();
		for (int x = 0; x < level.height; x++)
		{
			for (int y = 0; y < level.width; y++)
			{
				window.draw(level.sprite[x][y].texture);
			}
		}
		window.draw(character.character);	
		window.display();
	}
}
