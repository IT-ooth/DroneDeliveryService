#pragma once


#include <iostream>


class Vector {
private:
	double x, y;

public:
	Vector(double x, double y);
	Vector operator + (const Vector& v);
	Vector operator - (const Vector& v);
};


