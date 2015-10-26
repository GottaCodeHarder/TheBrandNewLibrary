#ifndef __HEADER_H__
#define __HEADER_H__

template <class DATA>
void MIswap(DATA &a, DATA &b)
{
	DATA c;
	c = a;
	a = b;
	b = c;
}


template <class DATA>
class Point
{
	/*
	DATA x, y;
	
	~Point(){} // No deixa fe el swap ja que es memoria dinamica
	*/
};

typedef Point<int> iPoint;
typedef Point<float> fPoint;

#endif