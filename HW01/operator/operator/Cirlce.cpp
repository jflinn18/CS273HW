#include "Circle.h"

// b
Circle::Circle() { setRad(0); }

// c
Circle::Circle(double rad) { setRad(rad); }

// d
double Circle::getArea() { return 3.14159265 * getRad() * getRad(); }

// f
double Circle::getRad() { return radius; }

// e
void Circle::setRad(double rad) { radius = rad; }