#pragma once
#include "Interface.h"
class Rectangle :
    public Interface
{
private:
	double a;
	double b;
public:
	Rectangle();
	Rectangle(double x, double y);
	Rectangle(Rectangle& d);
	~Rectangle();

	virtual double S();
	virtual double P();

	virtual ostream& operator <<(ostream& out);
	virtual istream& operator >>(istream& in);
	void show() { cout << "Rectangle" << endl; }
};

