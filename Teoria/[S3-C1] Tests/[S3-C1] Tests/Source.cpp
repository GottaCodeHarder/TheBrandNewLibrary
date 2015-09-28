#include <iostream>
using namespace std;

void my_func(int* num)
{
	*num = 15;
}

int main()
{
	int a = 5;
	my_func(&a);
	cout << a;
	system("PAUSE");
}
