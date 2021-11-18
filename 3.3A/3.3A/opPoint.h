#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include <cmath>
#pragma once
#include "Point.h"
class opPoint : public Point
{
public:
	opPoint();
	opPoint(double a, double b);
	opPoint(const opPoint& A);
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };


	void movingThePoint_X();
	void movingThePoint_Y();
	string toString() const;
	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };
};

