#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Vector
{
	int size;
	int* N;
public:
	Vector(int n = 1)//конструктор ініціалізації
		: size(n)
	{
		N = new int[size];
		for (int i = 0; i < size; i++)
			N[i] = 0;
	}
	~Vector()//деструктор
	{
		delete[] N;
	}
	Vector(const Vector& a);//конструктор копіювання 
	friend int Scalar(const Vector& a, const Vector& b);//скалярний добуток
	friend bool operator == (const Vector&, const Vector&);//перевантаження операції "дорівнює"
	int NormVec() { return abs(N[0] - N[size - 1]); }//норма вектора
	int& operator [](int i);//індексація
	operator string() const;//перетворення у літерний рядок
	Vector& operator =(const Vector& a);//перевантаження операції "присвоєння"
	const int& operator [](const int i) const;//індексація
	friend istream& operator >>(istream& in, Vector& a);//введення з клавіатури
	friend ostream& operator <<(ostream& out, const Vector& a);//вивід на екран
};

