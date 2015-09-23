#include <iostream>
using namespace std;

#define tamany 15

void test(int a)
{
	cout << sizeof(a);
}

struct point
{
	int x; // NO PESA RES, 0 bytes
	int y;
};

struct rect
{
	point a, b;
};

void CalculoArea(struct rect)
{
	
}

int main(void)
{
	/*
	float* p = new float[3];
	p[1] = 5.15f;
	*(p + 1) = 5.15f; //Agafes el punter P, avances una posicio y li fiques 5.15, es equivalent a p[1] = 5.15f
	delete[] p; //el delete te [] perque p s'ha declarat com p[3]
	system("PAUSE");
	*/

	rect cuadrado;
	CalculoArea(cuadrado);


	point* a = new point[100];
	(a+2)->y;

	char* set[7] = { "lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo" };
	char* sat[] = { "lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo", NULL, NULL };

	/*int a[15];
	cout << sizeof(a) << endl; // 60
	int* b = a;
	cout << sizeof(b) << endl; // 4
	test(a);
	system("PAUSE");
	*/
}