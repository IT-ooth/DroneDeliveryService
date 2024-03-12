#include "Map.h"
#include "Drone.h"

Map::Map(int map[100][100]) {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			bitmap[i][j] = map[i][j];
		}
	}
}

int Map::getPos(int x, int y) {
	return bitmap[x][y];
}

int Map::findLoad(Drone& drone) {
	return 1;
}