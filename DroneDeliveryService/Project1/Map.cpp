#include "Map.h"
#include "Drone.h"
#include <vector>
#include <iostream>

using namespace std;

Map::Map(vector<vector<int>>& vec) :v(vec) {}

int Map::getPos(int x, int y) {
	return v[x][y];
}

int Map::findLoad(Drone& drone) {

	if (drone.getPos()[0] != 0 or drone.getPos()[0] < v.size()) {
		if (v[drone.getPos()[0] + 1][drone.getPos()[1]] == 1) { return RIGHT; }

		if (v[drone.getPos()[0] - 1][drone.getPos()[1]] == 1) { return LEFT; }
	}

	if (drone.getPos()[1] != 0 or drone.getPos()[1] < v[0].size()) {
		if (v[drone.getPos()[0]][drone.getPos()[1] - 1] == 1) { return TOP; }
		
		if (v[drone.getPos()[0]][drone.getPos()[1] + 1] == 1) { return BOTTOM; }
		
	}
	return NONE;
}