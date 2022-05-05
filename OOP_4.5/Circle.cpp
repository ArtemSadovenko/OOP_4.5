#include "Circle.h"

Circle::Circle() :
	a(0)
{
}

Circle::Circle(double b) :
	a(b)
{
}

Circle::Circle(Circle& b) :
	a(b.a)
{
}

Circle::~Circle()
{
}

ostream& Circle::operator<<(ostream& out)
{
	out << "Circle\n" << a << endl;
	return out;

	// TODO: вставьте здесь оператор return
}

istream& Circle::operator>>(istream& in)
{
	cout << "a: "; in >> a;
	return in;
	// TODO: вставьте здесь оператор return
}

double Circle::S() {
	return pow(a, 2) * 3.14;
}

double Circle::P() {
	return a * 2 * 3.14;
}
