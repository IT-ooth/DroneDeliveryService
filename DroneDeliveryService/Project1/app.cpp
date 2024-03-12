#include "Vector.h"
#include "Map.h"
#include "Drone.h"
#include "Datatype.h"
#include <iostream>

int bitmap[100][100];

int main() {
	
	bitmap[4][2] = 4;

	vector v = vector(1, 2);
	Map bit = Map(bitmap);
	Drone d = Drone(1, 2);
	std::cout << *d.getPos();

	return 0;
}
