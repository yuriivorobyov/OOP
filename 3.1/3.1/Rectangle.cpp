#include "Rectangle.h"

Rectangle::Rectangle(const double A, const double B)
{

	if (A > 0 && B > 0)
	{
		SetA(A);
		SetB(B);
	}
	else
	{
		SetA(0);
		SetB(0);
	}
}

Rectangle::Rectangle(const Rectangle& v)
{
	double a = v.GetA();
	double b = v.GetB();
}

Rectangle::~Rectangle(void)
{}

Rectangle& Rectangle::operator = (const Rectangle& n)
{
	double a = n.GetA();
	double b = n.GetB();

	return *this;
}

Rectangle::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << GetA() << endl;
	ss << "b = " << GetB() << endl;

	return ss.str();
}

ostream& operator <<(ostream& out, const Rectangle& s)
{
	out << (string)s;
	return out;
}

istream& operator >>(istream& in, Rectangle& s)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	if (a > 0 && b > 0)
	{
		s.SetA(a);
		s.SetB(b);

	}
	else
	{
		s.SetA(0);
		s.SetB(0);

	}
	return in;
}

double Rectangle::Square() const
{
	double a = GetA();
	double b = GetB();

	double S = 0;

	if (a == 0 || b == 0)
	{
		cout << "Square of rectangle doesn't exists" << endl;
	}
	else
	{

		S = a * b;
	}
	return S;
}

double Rectangle::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = a * 2 + b * 2;
	return P;
}
