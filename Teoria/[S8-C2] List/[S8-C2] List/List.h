#ifndef __LIST_H__
#define __LIST_H__
#include "defs.h"

template <class TYPE>
struct Node
{
	TYPE data;
	Node<TYPE>* next = NULL;
	Node<TYPE>* prev = NULL;

	Node(const TYPE& data : data(data){}
};

template <class TYPE>
class List
{
private:

	Node<TYPE>* start = NULL; // No fa falta end

public:
	Node& GetStart() const {return start;}
	Node& SetEnd()
	{
		if (start != NULL)
			Node<TYPE>* tmp = start, return NULL;
		while (tmp->next != NULL)
			tmp = tmp->next;
		return tmp;
	}
	int Count();

	void PushBack(const TYPE& item)
	{
		Node<TYPE>* newNode = new Node<TYPE>(item);
		if (start == NULL)
		{
			start = newNode;
		}
		else
		{
			Node<TYPE>* tmp = start;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp // <======================
		}
	}

	bool Empty() const
	{
		return start == NULL;
	}

	void Clear()
	{
		Node<TYPE>* tmp = start;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			delete tmp->prev;
			tmp = start;
		}
		start = NULL;
	}

	int Size() const
	{
		Node<TYPE>* tmp = start;
		int size = 0;

		while (tmp)
		{
			size++;
			tmp = tmp->next;
		}
		return size;
	}

	Node& GetBack() const;
	void PushFront();

	bool PopBack(TYPE& var)
	{
		if (GetStart() != NULL)
		{
			Node<TYPE>* tmp = SetEnd();
			tmp->prev->next = NULL;
			var = tmp->data;
			delete tmp;
			return true;
		}
		return false;
	}

	Node& PopFront();
	Insert(); // On vulguis fiques un node
	Remove(); // Eliminar el node que vulguis

	~List(){}
};

#endif