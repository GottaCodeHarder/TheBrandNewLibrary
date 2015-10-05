#include <iostream>
using namespace std;

void swap(int* c, int* d)
{
	int k;
	k = *c;
	*c = *d;
	*d = k;
}

int main()
{
	int a = 1000;
	int b = 2000;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
	system("PAUSE");
}

// Fer operadors = == != += -= + - IsZero() SetZero() Negate()

class Point
{
public:
	int x, y;
	
	Point& operator = (Point a)
	{
		x = a.x;
		y = a.y;
		return *this;
	}

	bool operator == (Point a) const
	{
		if (x == a.x && y == a.y)
		{
			return true;
		}
		else
			return false;
	}

	bool operator != (Point a) const
	{
		if (x != a.x && y != a.y)
		{
			return true;
		}
		else
			return false;
	}

	Point& operator += (Point a)
	{
		x = x + a.x;
		y = y + a.y;
		return *this;
	}

	Point& operator -= (Point a)
	{
		x = x - a.x;
		y = y - a.y;
		return *this;
	}

	Point operator + (Point a) const
	{
		Point k;
		k.x = x + a.x;
		k.y = y + a.y;
		return k;
	}

	Point operator - (Point a) const
	{
		Point k;
		k.x = x - a.x;
		k.y = y - a.y;
		return k;
	}

	bool IsZero(Point a) const
	{
		if (a.x == 0 && a.y == 0)
			return true;
		else return false;
	}

	void SetZero(Point a)
	{
		a.x = 0;
		a.y = 0;
	}

	void Negate(Point a)
	{
		a.x = -a.x;
		a.y = -a.y;
	}
};