#pragma once
#include "Pair.h"

class Rectangle_Private : private Pair
{
public:
	using Pair::GetA;
	using Pair::GetB;

	using Pair::SetA;
	using Pair::SetB;

	using Pair::Pair;

	Rectangle_Private();
	Rectangle_Private(const double a, const double b);
	Rectangle_Private(const Rectangle_Private& s);

	Rectangle_Private& operator = (const Rectangle_Private& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Rectangle_Private& s);
	friend istream& operator >> (istream& in, Rectangle_Private& s);

	Rectangle_Private& operator ++ ();
	Rectangle_Private& operator -- ();
	Rectangle_Private operator ++ (int);
	Rectangle_Private operator -- (int);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};

