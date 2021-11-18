#include "opPoint.h"
#include "iostream"
using namespace std;
opPoint::opPoint()
{
	x = 0;
	y = 0;
}
opPoint::opPoint(double a, double b)
{
	x = a;
	y = b;
}
opPoint::opPoint(const opPoint& A)
{
	x = A.x;
	y = A.y;
}
void opPoint::movingThePoint_X()
{
	float rx;
	cin >> rx;
	x += rx;
	cout << x;
	toString();

}

void opPoint::movingThePoint_Y()
{
	float ry;

	cin >> ry;
	y += ry;
	cout << y;
	toString();
	cout << endl;
	cout << "Distance: " << sqrt(x * x + y * y) << endl;
}

string opPoint::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}
