#include <iostream>
#include "String.h"
using namespace std;

String::String(){}

String::String(const String&)
{
	this->str = str;
	this->mem_capacity = mem_capacity;
}

String::String(const char* a)
{
	this->str = a;

}

String::String(const uint a)
{
	this->mem_capacity = a;
}


String::~String(){};