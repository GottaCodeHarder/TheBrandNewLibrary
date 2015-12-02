#include <iostream>
using namespace std;

unsigned int factorial(int k)
{
	if (k > 1)
		return k*factorial(k - 1);
	else return 1;
}

int main()
{
	int k = 2;
	cout << factorial(5);
	system("PAUSE");
}

// Fer Fibonacci 