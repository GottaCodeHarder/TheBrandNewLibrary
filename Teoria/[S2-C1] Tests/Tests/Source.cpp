#include <iostream>
#include <string>
using namespace std;

// SWAP PUNTERS y STRCPY

void swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

void strcopy(string c1, string c2)
{
	for (int i = 0; i < 50 && c2[i] != '\0'; i++)
	{
		c2[i] = c1[i];
	}
}

int main()
{
	int a, b;
	a = 1; 
	b = 2;
	int *p1 = &a;
	int *p2 = &b;
	cout << "El punter p1 apunta a " << *p1 << endl;
	cout << "El punter p2 apunta a " << *p2 << endl;
	swap(p1, p2);
	cout << "Ara el punter p1 apunta a " << *p1 << endl;
	cout << "Ara el punter p2 apunta a " << *p2 << endl;

	string s1, s2;
	s1 = "aaaaaa";
	s2 = "bbbbbb";
	strcopy(s1, s2);
	cout << "\n\nEl primer String es: " << s1 << endl;
	cout << "El segon String es: " << s2 << endl;
	system("PAUSE");
}