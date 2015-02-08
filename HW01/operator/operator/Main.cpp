#include "Circle.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;


Circle operator+(Circle c1, Circle c2)
{
	double newRad;
	newRad = c1.getRad() + c2.getRad();

	Circle newCircle(newRad);

	return newCircle;
}


int main()
{
	srand(time(NULL));

	Circle c1, c2;

	while (c1.getRad() == c2.getRad())
	{
		c1.setRad(rand() % 25);
		c2.setRad(rand() % 25);
	}

	Circle c3 = c1 + c2;

	cout << c1.getRad() << "\n" << c2.getRad() << "\n" << c3.getRad() << endl;
}