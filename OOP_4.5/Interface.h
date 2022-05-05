#pragma once
#include <iostream>

using namespace std;

class Interface
{
public:
	virtual ostream& operator <<(ostream& out) = 0;
	virtual istream& operator >>(istream& in) = 0;
	virtual double S() = 0;
	virtual double P() = 0;

	void show() { cout << "Interface" << endl; }
};

