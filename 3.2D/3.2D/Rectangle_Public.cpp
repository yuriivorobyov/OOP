#include "Rectangle_Public.h"
Rectangle_Public::Rectangle_Public()
	: Pair()
{}

Rectangle_Public::Rectangle_Public(const double A, const double B)
{
	if (A > 0 && B > 0)
	{
		SetA(A); SetB(B);
	}
	else
	{
		SetA(0); SetB(0);
	}
}

Rectangle_Public::Rectangle_Public(const Rectangle_Public& v)
	: Pair(v)
{}

Rectangle_Public& Rectangle_Public::operator --()
{
	this->SetA(this->GetA() - 1);
	return *this;
}

Rectangle_Public& Rectangle_Public::operator ++()
{
	this->SetA(this->GetA() + 1);
	return *this;
}

Rectangle_Public Rectangle_Public::operator --(int)
{
	Rectangle_Public a(*this);
	this->SetA(this->GetA() - 1);
	return a;
}

Rectangle_Public Rectangle_Public::operator ++(int)
{
	Rectangle_Public a(*this);
	this->SetA(this->GetA() + 1);
	return a;
}

double Rectangle_Public::Dobutok()
{
	return GetA() * GetB();
}

double Rectangle_Public::Square() const
{
	double a = GetA();
	double b = GetB();
	double S = 0;

	if (a == 0 || b == 0)
	{
		cout << "Square of triangle doesn't exists" << endl;
	}
	else
	{

		S = a * b;
	}
	return S;
}


double Rectangle_Public::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 0;

	if (a == 0 || b == 0)
	{
		cout << "Perimeter of triangle doesn't exists" << endl;
	}
	else
	{

		P = a * 2 + b * 2;
	}
	return P;
}
