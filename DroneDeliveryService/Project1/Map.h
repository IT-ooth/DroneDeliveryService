#pragma once

#include "Drone.h"

class Map
{
private:
	int bitmap[100][100];

public:
	Map(int map[100][100]);
	int getPos(int x, int y);
	int findLoad(Drone& drone);
};
