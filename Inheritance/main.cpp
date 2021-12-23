#include <iostream>

using namespace std;

class figure {
protected:
	double _x;
	double _y;
public:
	void set(double x, double y) { _x = x; _y = y; }
	int getX() { return _x; }
	int getY() { return _y; }
	void print() { cout << "x= " << _x << "; y= " << _y << ";\n"; }
	virtual void show_area() { cout << "error\n"; }
};
class Rectangle : public figure {
public:
	void show_area() { cout << "sides: \n" << "a= " << _x << ", b= " << _y << ";\n" << "S= " << _x * _y << ";\n"; }
};
class Triangle : public figure {
public:
	void show_area() { cout << "sides: \n" << "a= " << _x << ", b= " << _y << ";\n" << "S= " << (_x * _y) / 2 << ";\n"; }
};

int main() {
	figure* f;
	Rectangle r;
	Triangle rt;
	f = &r;
	f->set(3, 4);
	f->show_area();
	f = &rt;
	f->set(6, 8);
	f->show_area();
}