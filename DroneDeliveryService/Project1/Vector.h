#pragma once


#include <iostream>


class vector {
private:
	double x, y;

public:
	vector(double x, double y);
	vector operator + (const vector& v);

};


