#include "Rectangle.h"

Rectangle::Rectangle() :
	a(0), b(0)
{
}

Rectangle::Rectangle(double x, double y) :
	a(x), b(y)
{
}

Rectangle::Rectangle(Rectangle& d) :
	a(d.a), b(d.b)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::S()
{
	return a * b;
}

double Rectangle::P()
{
	return 2 * (a + b);
}

ostream& Rectangle::operator<<(ostream& out)
{
	out << "Rectangle:\n";
	out << a << " " << b << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& Rectangle::operator>>(istream& in)
{
	cout << "a: "; cin >>  a;
	cout << "b: "; cin >> b;
	return in;
	// TODO: вставьте здесь оператор return
}
