#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String a("koala");
	String b("alaok");
	a += b;
	printf("%s", a);
	system("PAUSE");
}