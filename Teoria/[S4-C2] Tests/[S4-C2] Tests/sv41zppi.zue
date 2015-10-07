#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;

	Point operator + (Point a) const
	{
		Point k;
		k.x = x + a.x;
		k.y = y + a.y;
		return k;
	}
};

int main() // Conseguir que funcione
{
	Point p1, p2;
	p1 = p2 + 3;

	// x += 3;
	// y += 3;

	p1 = 3 + p2;
}
