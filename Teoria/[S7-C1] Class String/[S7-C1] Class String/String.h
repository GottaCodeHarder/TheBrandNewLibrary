#ifndef __STRING_H__
#define __STRING_H__
typedef unsigned int uint;

class String
{
private:	// Si fos public, algu podria ficar un str de 10, y tenir una capacitat de 4 per exemple.
	char* str;
	uint mem_capacity;

public:
	String(){}
	String(const String&){}
	String(const char*);
	String(const uint);

	~String();
};

#endif