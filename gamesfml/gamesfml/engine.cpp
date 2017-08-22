#include "stdafx.h"
#include "engine.h"
#include "iostream"

/*
void Engine::IsometricMap(sf::RenderWindow *win, sf::View view)
{
// Set view
view = win->getView();
// Reverse project center
sf::Vector2f center = WorldToScreen(sf::Vector2f(100,100));
cout << center.x << " " << center.y << endl;
view.setCenter(center);
win->setView(view);

/*
// Reverse-project top-left corner
sf::Vector2f viewsize = view.getSize();
sf::Vector2f topleft = ScreenToWorld(sf::Vector2f(center.x - viewsize.x / 2.0f, center.y - viewsize.y / 2.0f));
int sx = (int)(topleft.x / (float)32);
int sy = (int)(topleft.y / (float)32);
sx -= 2;
}
*/
sf::Vector2f ScreenToWorld2(sf::Vector2f v)
{
return sf::Vector2f((v.x + 2.0f*v.y) / 4.0f, (2.0f*v.y - v.x) / 4.0f);
}
sf::Vector2f WorldToScreen2(sf::Vector2f v)
{
	return sf::Vector2f(2.0f*v.x - 2.0f*v.y, v.x + v.y);
}


void Engine::runEngine(sf::RenderWindow& window)
{
	gameplay = GAME;
	Level level;
	level.LoadMap("level.txt");
	sf::View view;
	view = window.getView();
	sf::Vector2f center = WorldToScreen2(sf::Vector2f(level.width/2, level.height/2));
	cout << center.x << " " << center.y << endl;
	view.setCenter(center);
	
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
		window.display();
	}
}