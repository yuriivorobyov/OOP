#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point
{
private:
	float x, y;
public:

	void r1(Point p);
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };
	float getX() { return x; };
	float getY() { return y; };
	void moveX();
	void moveY();

	bool Init(float x, float y);
	void Read();
	void Display();
	string toString() const;
}
;