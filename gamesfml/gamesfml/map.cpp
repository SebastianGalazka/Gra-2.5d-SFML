#include "stdafx.h"
#include "map.h"


Level::Level()
{

}
Level::~Level()
{

}
void Level::LoadSizeOfMapAndResizeVector()
{
	std::string size;
	map >> width >> height;
	if (width == 0 || height == 0)
	{
		map.close();
	}
	sprite.resize(height);
	floor.resize(height);
	for (int i = 0; i < height; i++)
	{
		floor[i].resize(width);
		sprite[i].resize(width);
	}
}
void Level::LoadMapToVector()
{
	for (int x = 0; x < height; x++)
	{
		for (int y = 0; y < width; y++)
		{
			int buffer;
			map >> buffer;
			floor[x][y] = buffer;
		}
	}
	map.close();
}
void Level::LoadLevel(std::string a)
{
	map.open(a, std::ios::in | std::ios::out);
	if (map.good() == true)
	{
		LoadSizeOfMapAndResizeVector();
		LoadMapToVector();
	}
	else
	{
		cout << "Wystapil problem z otworzeniem mapy." << endl;
	}
}
void Level::LoadGraphic()
{
	if (!graphic.loadFromFile("grafika.png"));
	{
		cout << "Wystapil problem z zaladowaniem grafiki." << endl;
	}
}
void Level::LoadGraphicToVector()
{
	for (int x = 0; x < height; x++)
	{
		for (int y = 0; y < width; y++)
		{
			if (floor[x][y] == 1)
			{
				cout << floor[x][y] << endl;
				sprite[x][y].setTexture(graphic);
				//sprite[x][y].setTextureRect(sf::IntRect(0, 0, 32, 32));
				sprite[x][y].setPosition(x*32,y*32);
			}
		}
	}
}
void Level::LoadMap(std::string a)
{
	LoadLevel(a);
	LoadGraphic();
	LoadGraphicToVector();
}
