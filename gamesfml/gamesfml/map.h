#pragma once
#include "fstream"
#include "iostream"
#include "vector"

using namespace std;

class Level
{
public:
	Level();
	~Level();
	fstream map;
	vector <vector< int > > floor;

	void LoadMap(std::string a);
	void LoadSizeOfMapAndSet();
	void LoadMapToVector();

private:
	unsigned short width;
	unsigned short height;

};