#pragma once
class Drone
{
private:
	int x, y;
public:
	Drone(int x, int y);
	void setPos(int x, int y);
	int* getPos();
	
};

