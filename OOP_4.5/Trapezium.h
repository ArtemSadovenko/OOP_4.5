#pragma once
#include "Interface.h"
class Trapezium :
    public Interface
{
private:
	double a;
	double b;
	double c;
	double d;
	double h;
public:
	Trapezium();
	Trapezium(double x, double y, double z, double g, double r);
	Trapezium(Trapezium& a);
	~Trapezium();

	virtual double P();
	virtual double S();

	virtual ostream& operator <<(ostream& out);
	virtual istream& operator >>(istream& in);
};

