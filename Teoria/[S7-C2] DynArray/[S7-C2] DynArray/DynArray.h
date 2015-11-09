#ifndef __DYNARRAY_H__
#define __DYNARRAY_H__
#include "defs.h" // MACROS definides a dintre
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

	DynArray(DATA& mem_res)
	{

	}

	~DynArray(){ if (data != NULL) delete[] data; } // Si no poses el if, aixo pot petar de mala manera (Run-time error)

	void Pushback(const DATA& ultim) // Rebre nomes una dada
	{
		if (numberElements == memoryCapacity)
		{
			DATA* tmp = data;
			data = new DATA[memoryCapacity + MEMORY_CHUNK];
			memcpy(data, tmp, num_elements*sizeof(DATA));
			delete[] tmp;
		}
		
		data[numberElements++] = ultim;
	}

	bool ReserveCapacity(int a)
	{
		if (a < memoryCapacity)
			return false;
		memoryCapacity = a;
		return true;
	}

	DynArray& At(const uint &position) const
	{
		if (position < numberElements)
			return data[position];
	}

	const DynArray c_str() const
	{
		return data;
	}

	uint GetCapacity() const
	{
		return memoryCapacity;
	}

	uint GetSize() const
	{
		return numberElements;
	}

	bool Empty() const
	{
		return (numberElements == 0);
	}

	void Clear()
	{
		numberElements = 0;
	}

	// new y delete reserven memoria, no la toquen (posar valors a 0).
	// operador [],  operador =, pop_back (en el moment que el treus, l'estas borrant), shrink_to_fit() (si ens sobra memoria, hem de destruir el lo que sobra, fer un new), flip ( ABCDE => EDCBA ), insert (pos, data) (ABCDE => ABXCDE)
};

#endif