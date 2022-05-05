#include "Trapezium.h"

Trapezium::Trapezium() :
	a(0), b(0), c(0), d(0), h(0)
{
}

Trapezium::Trapezium(double x, double y, double z, double g, double r) :
	a(x), b(y), c(z), d(g), h(r)
{
}

Trapezium::Trapezium(Trapezium& a) :
	a(a.a), b(a.b), c(a.c), d(a.d), h(a.h)
{
}

Trapezium::~Trapezium()
{
}

double Trapezium::P()
{
	return a + b + c + d;
}

double Trapezium::S()
{
	return (a+ b) * h / 2;
}

ostream& Trapezium::operator<<(ostream& out)
{
	out << "Trapezium" << endl;
	out << a << " " << b << " " << c << " " << d << " " << h << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& Trapezium::operator>>(istream& in)
{
	cout << "a: "; in >> a; 
	cout << "b: "; in >> b;
	cout << "c: "; in >> c;
	cout << "d: "; in >> d;
	cout << "h: "; in >> h;
	return in;
	// TODO: вставьте здесь оператор return
}
