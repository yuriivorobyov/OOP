#pragma once
#include "Pair.h"

class Rectangle_Public : public Pair
{
public:
	Rectangle_Public();
	Rectangle_Public(const double a, const double b);
	Rectangle_Public(const Rectangle_Public& v);

	Rectangle_Public& operator ++ ();
	Rectangle_Public& operator -- ();
	Rectangle_Public operator ++ (int);
	Rectangle_Public operator -- (int);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};


