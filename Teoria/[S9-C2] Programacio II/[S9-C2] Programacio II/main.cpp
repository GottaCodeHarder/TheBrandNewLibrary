#include <iostream>
#include "DynArray.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include "Graph.h"
#include "BubbleSort.h"
using namespace std;

int main()
{
	DynArray<int> A;
	for (int i = 15; i >= 0; i--)
	{
		A.Pushback(rand()%90);
	}
	
	BubbleSort<int> AAA(A);
	AAA.data = A;
	printf("%i" ,AAA.SortBigger());
	system("PAUSE");
	return 0;
}