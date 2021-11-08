#include "Rectangle_Private.h"
Rectangle_Private::Rectangle_Private()
	: Pair()
{}

Rectangle_Private::Rectangle_Private(const double A, const double B)
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

Rectangle_Private::Rectangle_Private(const Rectangle_Private& v)
	: Pair(v)
{}

Rectangle_Private& Rectangle_Private::operator = (const Rectangle_Private& n)
{
	double a = n.GetA();
	double b = n.GetB();
	return *this;
}

Rectangle_Private::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << GetA() << endl;
	ss << "b = " << GetB() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Rectangle_Private& s)
{
	out << (string)s;
	return out;
}

istream& operator >>(istream& in, Rectangle_Private& s)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	if (a > 0 && b > 0)
	{
		s.SetA(a); s.SetB(b);
	}
	else
	{
		s.SetA(0); s.SetB(0);
	}
	return in;
}

Rectangle_Private& Rectangle_Private::operator --()
{
	this->SetA(this->GetA() - 1);
	return *this;
}

Rectangle_Private& Rectangle_Private::operator ++()
{
	this->SetA(this->GetA() + 1);
	return *this;
}

Rectangle_Private Rectangle_Private::operator --(int)
{
	Rectangle_Private a(*this);
	this->SetA(this->GetA() - 1);
	return a;
}

Rectangle_Private Rectangle_Private::operator ++(int)
{
	Rectangle_Private a(*this);
	this->SetA(this->GetA() + 1);
	return a;
}

double Rectangle_Private::Dobutok()
{
	return GetA() * GetB();
}

double Rectangle_Private::Square() const
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

double Rectangle_Private::Perimeter() const
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
