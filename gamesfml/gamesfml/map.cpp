#include "stdafx.h"
#include "map.h"


Level::Level()
{

}
Level::~Level()
{

}
void Level::LoadSizeOfMapAndSet()
{
		std::string size;
		map >> width >> height;
		if (width == 0 || height == 0)
		{
			map.close();
		}
	
	floor.resize(height);
	for (int i = 0; i < height; i++)
	{
		floor[i].resize(width);
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
		cout << "Otworzono plik z mapa." << endl;
		LoadSizeOfMapAndSet();
		LoadMapToVector();
	}
	else
	{
		cout << "Wystapil problem z otworzeniem mapy." << endl;
	}
}
void Level::LoadGraphic()
{

}
void Level::LoadGraphicToVector()
{

}
void Level::LoadMap(std::string a)
{
	LoadLevel(a);
}
