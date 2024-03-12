#pragma once

#include "Drone.h"
#include <vector>
#include <iostream>

using namespace std;

enum Direction {
	TOP,
	RIGHT,
	LEFT,
	BOTTOM,
	NONE
};

class Map
{
private:
	vector<vector<int>> v;

public:
	Map(vector<vector<int>> &vec);
	int getPos(int x, int y);
	int findLoad(Drone& drone);
};
