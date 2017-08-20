#pragma once
#include "SFML/Graphics.hpp"
#include "fstream"
#include "iostream"
#include "vector"

using namespace std;
using namespace sf;

class Level
{
public:
	Level();
	~Level();
	struct Tile
	{
		Sprite texture;
		string TypeOfTexture;
		bool Collision;
	};
	vector<vector<Tile> > sprite;
	unsigned short width;
	unsigned short height;
	Texture graphic, texture;
	fstream map;
	void LoadMap(std::string a);
	void LoadSizeOfMapAndResizeVector();
	void LoadMapToVector();
	void LoadLevel(std::string a);
	void LoadGraphicToVector();
	void LoadGraphic();
};