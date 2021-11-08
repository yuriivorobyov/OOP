#pragma once
#include "Pair.h"
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point : public Pair
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



	double distanceBetweenPoints()const { return sqrt(x * x + y * y); };;

	void movingThePoint_X();
	void movingThePoint_Y();

	Point& operator --();
	Point& operator ++();
	Point operator --(int);
	Point operator ++(int);

	string toString() const;

};

