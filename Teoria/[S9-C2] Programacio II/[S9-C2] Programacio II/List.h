#ifndef __LIST_H__
#define __LIST_H__
#include "defs.h"

template <class TYPE>
struct Node
{
	TYPE data;
	Node<TYPE>* next = NULL;
	Node<TYPE>* prev = NULL;

	Node(const TYPE& data) : data(data){}
};

template <class TYPE>
class List
{
private:

	unsigned int size;
	Node<TYPE>* start = NULL; // No fa falta end

public:
	// Constructor
	List()
	{
		size = 0; 
	}
	
	// Gets & Sets
	uint GetSize() const { return size; }

	Node<TYPE>& GetStart() const { return start; }

	Node<TYPE>& GetBack() const
	{
		if (start != 0)
		{
			Node<TYPE>* last = start;

			while (last->next != NULL)
			{
				last = last->next;
			}
		}
		return last;
	}

	void AddSize() { size++; }

	void AddSize(int a) { size += a; }

	Node<TYPE>& SetEnd()
	{
		if (start != NULL)
			Node<TYPE>* tmp = start, return NULL;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		return tmp;
	}
	void SetSize(int a) { size = a; }

	// Metodes
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
			tmp->next = newNode; 
			newNode->next = NULL;
		}
		size++;
	}

	void PushFront(const TYPE& item)
	{
		Node<TYPE>* newNode = new Node<TYPE>(item);
		if (start == NULL)
		{
			start = newNode;
		}
		else
		{
			start->prev = newNode;
			newNode->next = start;
			start = newNode;
		}
		size++;
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
		size = 0;
	}

	int Size() const
	{
		/*Node<TYPE>* tmp = start;
		int size = 0;

		while (tmp)
		{
			size++;
			tmp = tmp->next;
		}*/
		return size;
	}

	bool PopBack(TYPE& var)
	{
		if (start != NULL)
		{
			Node<TYPE>* tmp = SetEnd();
			tmp->prev->next = NULL;
			var = tmp->data;
			delete tmp;
			return true;
		}
		return false;
	}

	Node<TYPE>& PopFront()
	{
		Node<TYPE> node = new Node<TYPE>;
		node = start;
		return node;
	}

	bool Insert(TYPE data, unsigned int pos) // On vulguis fiques un node
	{
		bool ret = false;
		Node<TYPE> node = new Node<TYPE>(data);
		if (start != NULL)
		{
			if (pos > size)
				return ret;
			node->start;
			for (int a = 0; a < pos; a++)
			{
				node = node->next;
			}
			node->prev->next = node;
			node->next->prev = node;
		}
		return ret;
	}

	bool Remove(uint position) // Eliminar el node que vulguis
	{
		bool ret = false;
		if (position > size)
		{
			return ret;
		}
		if (start != NULL)
		{
			Node<TYPE>* find = start;
			for (int a = 0; a < position; a++)
			{
				find = find->next;
			}
			if (find->next != NULL)
				find->next->prev = find->prev;
			else find->prev->next = NULL;
			if (find->prev != NULL)
				find->prev->next = find->next;
			else start = start->next;
			RELEASE(find);
		}
	}

	~List(){}
};

#endif