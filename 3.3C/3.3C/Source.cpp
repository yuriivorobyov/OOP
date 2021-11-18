#include "Point.h"

int main()
{
	Point a;
	cin >> a;
	Point b(3, 3);
	Point c(b);
	c--;
	++b;
	cout << a;
	cout << b;
	cout << c;
	cout << "Moving the point x:";
	a.movingThePoint_X();
	cout << endl;
	cout << "Moving the point y:";
	a.movingThePoint_Y();
	cout << endl;
	cout << Object::Count() << endl;
	{
		Object d;
		cout << Object::Count() << endl;
	}
	cout << Object::Count() << endl;
}
