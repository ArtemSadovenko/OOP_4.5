#pragma once
#include "Interface.h"
class Circle :
    public Interface
{
private:
	double a;
public:
	virtual double S();
	virtual double P();

	Circle();
	Circle(double b);
	Circle(Circle& b);
	~Circle();

	void show() { cout << "Circle" << endl; }

	virtual ostream& operator <<(ostream& out);
	virtual istream& operator >>(istream& in);
};

