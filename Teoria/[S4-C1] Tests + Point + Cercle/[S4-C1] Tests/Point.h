#ifndef __POINT_H__
#define __POINT_H__

class Point
{
public:
	int x;
	int	y;

	Point();

	const Point& operator = (const Point& a);

	bool operator == (const Point& a) const;
	bool operator != (const Point& a) const;

	const Point& operator += (const Point& a);
	const Point& operator -= (const Point& a);

	Point operator + (const Point& a) const;
	Point operator - (const Point& a) const;

	bool IsZero() const;
	void SetZero();
	Point Negate();
};

#endif