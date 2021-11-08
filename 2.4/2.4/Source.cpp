#include <Windows.h>
#include "Vector.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector a(4);
	cin >> a;
	cout << "a: " << a;
	Vector b(4);
	cin >> b;
	cout << "b: " << b;
	cout << "Скалярний добуток a,b: " << Scalar(a, b) << endl;
	if (a == b)
		cout << "a=b" << endl;
	else
		cout << "a!=b" << endl;
	cout << "Норма вектора a: " << a.NormVec() << endl;
	cout << a[1] << endl;
	cout << b[1] << endl;
	b[1] = b[4];
	cout << "b: " << b;
	b[1] = 1;
	cout << (string)b;
	a = b;
	cout << a;
}
