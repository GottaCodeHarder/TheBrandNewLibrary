#ifndef __DYNARRAY_H__
#define __DYNARRAY_H__
#include "defs.h" // MACROS definies a dintre
#define MEMORY_CHUNK 16

template <class DATA>
class DynArray
{
private:
	uint numberElements = 0;
	uint memoryCapacity = 0;
	DATA* data = NULL;
public:
	DynArray() : memoryCapacity(MEMORY_CHUNK) // Tots els constructors a DynArray fan un new
	{
		data = new DATA[MEMORY_CHUNK];
	}

	DynArray(const DynArray& Array) : numberElements(Array.numberElements)
	{
		memoryCapacity = MAX(MEMORY_CHUNK, Array.memoryCapacity);
		data = new DATA[memoryCapacity];
		memcpy(data, Array.data, Array.numberElements*sizeof(DATA));
	}

	void Pushback(const DATA& ultim) // Rebre nomes una dada
	{
		if (numberElements == memoryCapacity)
			data = new DATA[memoryCapacity + MEMORY_CHUNK];

		data[numberElements + 1] = ultim;
	}

	DynArray ReserveCapacity(int a)
	{
		data = new DATA[a];
		memoryCapacity = a;
		return data;
	}

	void GetCapacity() const
	{
		return memoryCapacity;
	}

	void GetSize() const
	{
		return numberElements;
	}

	bool Empty() const
	{
		return (true == 0);
	}

	void Clear()
	{
		numberElements = 0;
	}

	// new y delete reserven memoria, no la toquen (posar valors a 0).
	// constructor que rebi memoria per reservar capacitat (fer un new), at(), capacity(), size(), clear(), bool empty() et torna true si esta buida

	~DynArray(){ if (data != NULL) delete[] data; } // Si no poses el if, aixo pot petar de mala manera (Run-time error)
};

#endif