#include <iostream>
#include "DynArray.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include "Graph.h"
using namespace std;

int main()
{
	Graph<int> AAA;

	Graph<int>::Node nodeA = AAA.CreateNode(1);
	Graph<int>::Node nodeB = AAA.CreateNode(2);
	Graph<int>::Node nodeC = AAA.CreateNode(3);
	AAA.AddNode(nodeA);
	AAA.AddNode(nodeB);
	AAA.AddNode(nodeC);

	printf("%i" ,AAA);
	system("PAUSE");
	return 0;
}