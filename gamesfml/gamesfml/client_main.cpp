#include "stdafx.h"
#include "iostream"
#include "gamestate.h"
#include "engine.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode::getDesktopMode(), "Gra", Style::Default);
	window.setFramerateLimit(60);
	GameState state=MENU_ENGINE;
	while (state != END)
	{
		switch (state)
		{
		case GameState::MENU_ENGINE:
		{
			Engine engine;
			engine.RunEngine(window);
			break;
		}
		case GameState::END_ENGINE:
		{
			break;
		}
		}
	}
}

