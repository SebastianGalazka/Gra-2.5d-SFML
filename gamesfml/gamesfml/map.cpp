#include "map.h"


Level::Level()
{

}
Level::~Level()
{

}
void Level::LoadSizeOfMapAndSet()
{
	if (map.good() == true)
	{
		std::string size;
		map >> width >> height;
		if (width != 0 && height != 0)
		{
			map.close();
		}
		cout << "Otworzono plik z mapa." << endl;
	}
	else
	{
		cout << "Wystapil problem z otworzeniem mapy." << endl;
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
}
void Level::LoadMap(std::string a)
{
	map.open(a);
	LoadSizeOfMapAndSet();
	LoadMapToVector();
	
}