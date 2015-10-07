#include <iostream>
#include "Cercle.h"
using namespace std;

class Cercle
{
public:
	float radi;

	const Cercle operator = (const Cercle& a)
	{
		radi = a.radi;
		return *this;
	}

	bool operator == (const Cercle& a) const
	{
		if (a.radi == radi)
			return true;
		else return false;
	}

	bool operator != (const Cercle& a) const
	{
		if (a.radi == radi)
			return false;
		else return true;
	}

	const Cercle& operator += (const Cercle& a)
	{
		radi = radi + a.radi;
		return *this;
	}

	const Cercle& operator -= (const Cercle& a)
	{
		radi = radi - a.radi;
		return *this;
	}

	Cercle operator + (const Cercle& a) const
	{
		Cercle k;
		k.radi = radi + a.radi;
		return k;
	}

	Cercle operator - (const Cercle& a) const
	{
		Cercle k;
		k.radi = radi - a.radi;
		return k;
	}

	float getArea() const
	{
		float area, pi;
		pi = 3.1415;
		area = ((pi*radi)*(pi*radi));
		return area;
	}
};