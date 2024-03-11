#include "Vector.h"
#include <iostream>

vector::vector(double x, double y) :
    x(x), y(y) {}

vector vector::operator +(const vector& v) {
    return vector(x + v.x, y + v.y);
}