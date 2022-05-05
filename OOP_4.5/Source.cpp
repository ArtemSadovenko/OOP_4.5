
#include "Circle.h"
#include "Rectangle.h"
#include "Trapezium.h"

int main() {
	Circle* d = new Circle(3);
	Rectangle* b = new Rectangle(4, 5);
	Trapezium* t = new Trapezium(1, 2, 3, 4, 5);
	Interface* u = new Rectangle();
	cout << d->P() << endl;
	cout << t->S() << endl;

	*t << cout << endl;
	*t >> cin;
	*t << cout << endl;

	u->show();
	((Rectangle*)u)->show();
	dynamic_cast<Rectangle*>(u)->show();

}