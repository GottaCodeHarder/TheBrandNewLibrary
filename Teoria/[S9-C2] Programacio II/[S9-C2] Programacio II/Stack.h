#ifndef __STACK_H__
#define __STACK_H__
#include "defs.h"
#include "List.h"

template <class TYPE>
class Stack : public List<TYPE> // Es Array Dynamic
{
	List<TYPE> list;
public:

	Node<TYPE>& Pop()
	{
		return start;
	}

	void Push(Node& info)
	{
		if (start == NULL)
		{
			start = info;
		}
		else if ()
		{
			info->next->start;
			start->prev = info;
			start = info;
		}
		size++;
	}

	Node<TYPE>& Peek(uint numb) const
	{
		Node<TYPE> locator = new Node<TYPE>;
		int score;
		if (numb == 1 or numb == NULL)
			score = size;
		else score -= numb - 1;
		node = start;
		for (int i = 0; i < score; i++)
		{
			node->next;
		}
		return node;
	}
};

#endif