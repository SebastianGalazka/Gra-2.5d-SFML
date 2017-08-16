#include "stdafx.h"
#include "iostream"
#include "gamestate.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode::getDesktopMode(), "Gra", Style::Default);
	GameState state=GAME;
	while (state != END)
	{
		switch (state)
		{
		case GameState::GAME:
		{
			break;
		}
		case GameState::MENU:
		{
			break;
		}
		}
	}

}

