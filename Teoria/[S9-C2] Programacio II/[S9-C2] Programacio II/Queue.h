#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "defs.h"
#include "List.h"

template <class TYPE>
class Queue : public List<TYPE>
{
	List<TYPE> list;
public:

	void PopF()
	{
		list.PopFront();
	}
	
	void PushB(TYPE& data)
	{
		return list.PushBack(data);
	}

	bool Empty()
	{
		return list.Empty();
	}

};

#endif