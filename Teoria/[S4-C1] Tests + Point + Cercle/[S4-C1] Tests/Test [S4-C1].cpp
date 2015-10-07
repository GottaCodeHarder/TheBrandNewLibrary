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
