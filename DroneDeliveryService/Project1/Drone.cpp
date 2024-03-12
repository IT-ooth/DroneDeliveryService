#include "Drone.h"

Drone::Drone(int x, int y) : x(x), y(y) {}

void Drone::setPos(int x, int y) {
	x = x;
	y = y;
}

int* Drone::getPos() {
	return new int[2] {x, y};
}