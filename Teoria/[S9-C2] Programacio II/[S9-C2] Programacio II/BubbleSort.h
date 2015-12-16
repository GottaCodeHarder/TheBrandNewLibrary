#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include "DynArray.h"

template <class TYPE>
class BubbleSort
{
public:
	DynArray<TYPE> data;
	int times = 0;
	
	BubbleSort(){}
	BubbleSort(DynArray<TYPE> A)
	{ data = A; }

	int SortBigger()
	{	
		
		int size = data.GetSize();
		bool finished = false;
		
		while (!finished)
		{
			printf("Fila: ");
			int a = times;
			for (int i = 0; i < (size - 1); i++)
			{
				if (data[i] > data[i + 1])
				{
					times += 1;
					data.Swap(i, i + 1);
				}
				printf("%i ", data[i]);
			}
			printf("\n");
			if (a == times)
				finished = true;
		}
		return times;
	}
};

#endif