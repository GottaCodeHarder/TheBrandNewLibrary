#include <iostream>
#include "Point.h"
using namespace std;

class Point
{
public:
	int x, y;
	
	Point(){}

	const Point& operator = (const Point& a)
	{
		x = a.x;
		y = a.y;
		return *this;
	}

	bool operator == (const Point& a) const
	{
		if (x == a.x && y == a.y)
		{
			return true;
		}
		else
			return false;
	}

	bool operator != (const Point& a) const
	{
		if (x != a.x && y != a.y)
		{
			return true;
		}
		else
			return false;
	}
	
	const Point& operator += (const Point& a)
	{
		x = x + a.x;
		y = y + a.y;
		return *this;
	}

	const Point& operator -= (const Point& a)
	{
		x = x - a.x;
		y = y - a.y;
		return *this;
	}

	Point operator + (const Point& a) const
	{
		Point k;
		k.x = x + a.x;
		k.y = y + a.y;
		return k;
	}

	Point operator - (const Point& a) const
	{
		Point k;
		k.x = x - a.x;
		k.y = y - a.y;
		return k;
	}

	bool IsZero() const
	{
		if (x == 0 && y == 0)
			return true;
		else return false;
	}

	void SetZero()
	{
		x = 0;
		y = 0;
	}

	Point Negate()
	{
		x = -x;
		y = -y;
		return *this;
	}
};