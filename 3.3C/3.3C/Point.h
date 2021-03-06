#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Object.h"

using namespace std;

class Point : public Object
{
private:
	double x;
	double y;
public:
	Point();
	Point(double a, double b);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };

	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };
	void movingThePoint_X();
	void movingThePoint_Y();


	Point& operator --();
	Point& operator ++();
	Point operator --(int);
	Point operator ++(int);

	string toString() const;
};

