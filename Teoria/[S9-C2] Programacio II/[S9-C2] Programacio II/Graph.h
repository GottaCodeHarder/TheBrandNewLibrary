#ifndef __GRAPH_H__
#define __GRAPH_H__
#include "defs.h"

template <class TYPE>
class Graph
{
public:
	TYPE Node = NULL;
	DynArray<TYPE*> links; //DynArray

	Graph(){}

	void AddNode(TYPE Node)
	{
		TYPE NewNode = new Node(Node);
	}

	void AddLink(TYPE NodeI, TYPE NodeF)
	{
		links.Pushback(NodeI* NodeF); // <== WTF is this bullshit
	}

	bool DeleteLink(uint position)
	{
		delete links[position];
	}

	bool Pathfinding(TYPE* Node, TYPE* Node)
	{
		bool ret = false;

		return ret;
	}
};

//A->B->D->C->G  C->A C->B E->F F->E

#endif