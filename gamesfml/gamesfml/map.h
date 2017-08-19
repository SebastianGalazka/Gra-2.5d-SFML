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
	unsigned short width;
	unsigned short height;
	Texture graphic, texture;
	fstream map;
	vector <vector< char > > floor;
	vector <vector< Sprite > > sprite;
	void LoadMap(std::string a);
	void LoadSizeOfMapAndResizeVector();
	void LoadMapToVector();
	void LoadLevel(std::string a);
	void LoadGraphicToVector();
	void LoadGraphic();
};