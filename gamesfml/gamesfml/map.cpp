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
	map >> width >> height;
	if (width == 0 || height == 0)
	{
		map.close();
	}
	sprite.resize(height);
	for (int i = 0; i < height; i++)
	{
		sprite[i].resize(width);
	}
}
void Level::LoadMapToVector()
{
	for (int x = 0; x < height; x++)
	{
		for (int y = 0; y < width; y++)
		{
			string buffer;
			map >> buffer;
			sprite[x][y].TypeOfTexture = buffer;
		}
	}
	map.close();
}
void Level::LoadLevel(std::string a)
{
	map.open(a, std::ios::in);
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
			cout << sprite[x][y].TypeOfTexture;
			if (sprite[x][y].TypeOfTexture=="1")
			{
				
				sprite[x][y].texture.setTexture(graphic);
				sprite[x][y].texture.setTextureRect(sf::IntRect(0, 0, 32, 32));
				sprite[x][y].texture.setPosition(x * 32, y * 32);
			}
			if (sprite[x][y].TypeOfTexture == "0")
			{
				sprite[x][y].texture.setTexture(graphic);
				sprite[x][y].texture.setTextureRect(sf::IntRect(32, 32, 32, 32));
				sprite[x][y].texture.setPosition(x * 32, y * 32);
			}
		}
		cout << endl;
	}
}
void Level::LoadMap(std::string a)
{
	LoadLevel(a);
	LoadGraphic();
	LoadGraphicToVector();
}
