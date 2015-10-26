#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	char a = 'a';
	#include "MiPrueba.h" // lol, el continguit de MiPrueba.h, char b = 'b';
	MIswap(a, b); 
	printf("%c, %c\n", a, b);

	iPoint c;
	iPoint d;
	printf("%i, %i\n", c, d);
	
	int p = 5;
	#include "SumaTroll.h"
	#include "SumaTroll.h" // No funciona, no suma 10 per culpa de pragma once O el #ifndef.
	printf("%i\n", p);
	system("PAUSE");
}