#include <iostream>
#include "DynArray.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
	int test = 20;
	DynArray<int> arrayTest;
	Queue<int> queueTest;

	queueTest.PushB(test);
	
	//queueTest.Empty();

	printf("%i \n", queueTest);
	system("PAUSE");
	return 0;
}