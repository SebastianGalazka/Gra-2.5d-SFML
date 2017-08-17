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
	Texture texture;
	fstream map;
	vector <vector< int > > floor;
	vector <vector< Sprite > > sprite;

	void LoadMap(std::string a);
	void LoadSizeOfMapAndSet();
	void LoadMapToVector();
	void LoadLevel(std::string a);
	void LoadGraphicToVector();
	void LoadGraphic();
};