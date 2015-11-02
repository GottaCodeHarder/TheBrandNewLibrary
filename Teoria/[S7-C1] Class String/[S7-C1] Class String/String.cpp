#include <iostream>
#include "String.h"
using namespace std;

String::String(){}

String::String(const String& a) // Arreglar
{
	if (&a != NULL)
	{
		this->str = str;
		this->mem_capacity = mem_capacity;
	}
}

String::String(const char* a)
{
	if (a != NULL)
	{
		int size = strlen(a);

		if (size > 0)//In case _str is empty ""
		{
			size += 1;
			str = new char[size];
			mem_capacity = size;
			strcpy_s(str, size, a);
		}
		else
		{
			mem_capacity = 1;
			str = new char[1];
			*str = '\0';
		}
	}
	else
		printf("Error found: The string trying to build is empty");
}

String::String(const uint mem_capacity)
{
	if (mem_capacity > 0)
	{
		str = new char[mem_capacity];
		this->mem_capacity = mem_capacity;
	}
	else printf("Error.");
}

/*
bool String::operator== (const String& string) const
{
	return strcmp(this->str, string.str) == 0;
}*/

bool String::operator += (const String& string) // Arreglar
{
	bool ret = false;
	if (string.mem_capacity > 0 && string.str != NULL)
	{
		this->mem_capacity = this->mem_capacity + string.mem_capacity;
		strcat_s(this->str, this->mem_capacity, string.str);
	}
	else printf("Error.");
	return ret;
}


String::~String(){};