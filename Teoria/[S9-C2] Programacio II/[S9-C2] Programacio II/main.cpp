#include <iostream>
#include "DynArray.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
	int test = 3;
	Stack<int> stackTest;

	for (int i = 0; i < 10; i++)
	{
		stackTest.PushBack(test);
	}

	printf("%i \n", stackTest);
	system("PAUSE");
	return 0;
}