#include "Vector.h"
#include <iostream>

Vector::Vector(double x, double y) :
    x(x), y(y) {}

Vector Vector::operator +(const Vector& v) {
    return Vector(x + v.x, y + v.y);
}

Vector Vector::operator -(const Vector& v) {
    return Vector(x - v.x, y - v.y);
}



