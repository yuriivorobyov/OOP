#pragma once
#pragma pack(1)
#include "Pair.h"

class Rectangle : public Pair
{
public:

	Rectangle(const double a = 0, const double b = 0);
	Rectangle(const Rectangle& s);
	~Rectangle(void);

	Rectangle& operator = (const Rectangle& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Rectangle& s);
	friend istream& operator >> (istream& in, Rectangle& s);

	double Square() const;
	double Perimeter() const;

};

