#ifndef __STACK_H__
#define __STACK_H__
#include "defs.h"
#include "List.h"

template <class TYPE>
class Stack 
{
	uint numberElements;
	uint memoryCapacity;
	TYPE* data;
public:

	Stack() : memoryCapacity(MEMORY_CHUNK)
	{
		data = new TYPE[memoryCapacity];
	}

	Stack(uint size)
	{
		memoryCapacity = MEMORY_CHUNK * ((size / MEMORY_CHUNK) + 1);
		data = new TYPE[memoryCapacity];
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

	bool Empty()
	{
		return numberElements == 0;
	}

	uint Size()
	{
		return numberElements;
	}

	void PushBack(const TYPE& element)
	{
		if (numberElements == memoryCapacity)
		{
			memoryCapacity += MEMORY_CHUNK;
			uint newSize = memoryCapacity;
			TYPE* tmp = new TYPE[newSize];

			memcpy(tmp, data, numberElements * sizeof(TYPE));
			delete[] data;
			data = tmp;
		}
		data[numberElements++] = element;
	}

	bool PopBack(TYPE& item)
	{
		bool ret = false;

		if (numberElements > 0)
		{
			item = data[--numberElements];
			ret = true;
		}
		return ret;
	}

	void Delete()
	{
		if (data != NULL)
			delete[] data;
	}
};

#endif