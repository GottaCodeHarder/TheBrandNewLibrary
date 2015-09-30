#include <iostream>
using namespace std;


// Practicant Herencia
class Shape
{
public:
	int base;
	int altura;
	virtual int getArea() const // virtual int getArea() cont = 0 // VIRTUAL PURA
	{
		return 0;
	}
};

class Rectangle : public Shape
{
public:
	int getArea() const
	{
		return base*altura;
	}
};

class Triangle : public Shape
{
public:
	int getArea() const
	{
		return ((base*altura) / 2);
	}
};

	int main()
{
		Shape a;
		Rectangle b;
		Triangle c;
		b.base = 10;
		b.altura = 10;
		c.base = 20;
		c.altura = 50;
		cout << b.getArea() << endl;
		cout << c.getArea() << endl;

		// Cosas mas chungas
		Shape* s1 = new Rectangle();
		Shape* s2 = new Triangle();
		s1->base = 10;
		s1->altura = 10;
		s2->base= 20;
		s2->altura = 50;
		cout << s1->getArea() << endl;
		cout << s2->getArea() << endl;
		delete s1;
		delete s2;

		system("PAUSE");
}