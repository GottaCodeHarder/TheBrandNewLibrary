#include <iostream>
#include <stdlib.h>
#include <limits.h>
using namespace std;

/* printf (char "%c") (int "%i" "%d") (float "%f") (string "%s") */


//// TEST NUMERO 0 : Reventando variables ////==============================

int main()
{
	cout << "//// TEST NUMERO 0 : Reventando variables" << endl;
	char a = 300;
	bool b = 45;
	printf("%c \n", a);
	printf("%i \n", a);

	if (b == 1)
	{
		cout << "b da true" << endl;
	}

	if (b != 1)
	{
		cout << b << endl;
	}
	system("PAUSE");
}


//// TEST NUMERO 1 : Transformaciones WTF ////==============================
/*
char transformToChar(int nom) //entra un NUMERO int, surt un NUMERO en char.
{
	return nom + 48;
}

int main()
{
	int a = 2;
	cout << "//// TEST NUMERO 1 : Transformaciones WTF" << endl;
	printf("%c \n", transformToChar(3));
	printf("%i \n", transformToChar(3));
	cout << "Numero original: " << a << endl;
	system("PAUSE");
}
*/


//// TEST NUMERO 2 : bool watcha doing ////=================================
/*
int main()
{
	bool a = 49;
	if (a == true)
	{
		cout << "//// TEST NUMERO 2 : bool watcha doing" << endl;
		printf("%s", "\nThis shit is real.\n");
		system("PAUSE");
	}
}
*/


//// TEST NUMERO 3 : enums please ////======================================
/*
enum items1{
	DOUBLE_CORDA,     // Posicio 0
	BOTES,			  // Posicio 1
	GANXO,			  // Posicio 2
	ESCOPETA		  // Posicio 4
};

enum items2{
	DOUBLE_CORDA2 = 10, // Posicio 10
	BOTES2,             // Posicio 11
	GANXO2 = -15,	    // Posicio -15
	ESCOPETA2,		    // Posicio -14
};

int main()
{
	if (GANXO == 2)
	{
		cout << "//// TEST NUMERO 3 : enums please" << endl;
		printf("%i", BOTES);
		cout << endl << BOTES << "\n" << GANXO2 << endl;
		system("PAUSE");
	}
}
*/

//// TEST NUMERO 4 : WTFx2 //=================================================
/*
struct ikea
{
	short int BJÖRN;
	short int MALM;
	short int BRIMNES;
	unsigned short int STUVA;
	bool shit = true;
};

int main()
{
	ikea OP;
	OP.MALM = 65535;
	OP.STUVA = 65535;
	cout << "//// TEST NUMERO 4 : WTFx2\n" << OP.MALM << endl << OP.STUVA << endl;
	
	OP.MALM = 32767;
	OP.STUVA = -1;
	cout << OP.MALM << endl << OP.STUVA << "\nRange Overflow = Cool. => DeathMatch Incoming\n";
	
	OP.BJÖRN = 32767;
	OP.MALM = 10000000000000000000;
	OP.BRIMNES = 32767;
	OP.shit = true;
	cout << OP.BJÖRN << endl << OP.MALM << endl << OP.BRIMNES << endl << OP.STUVA << endl << OP.shit << endl;
	cout << "Fail.\n";

	system("PAUSE");
}
*/


//// TEST NUMERO 5 : LIMITES //=================================================
/*
int main()
{
	
	cout << "//// TEST NUMERO 5 : LIMITES\n";
	printf("\nThe number of bits in a byte: %d\n", CHAR_BIT);

	printf("\nThe minimum value of SIGNED CHAR = %d\n", SCHAR_MIN); // 1 BYTE
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

	printf("\nThe minimum value of SHORT INT = %d\n", SHRT_MIN); // 2 BYTES
	printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
	printf("The maximum value of UNSIGNED SHORT INT = %d\n", USHRT_MAX);

	printf("\nThe minimum value of INT = %d\n", INT_MIN); // 4 BYTES
	printf("The maximum value of INT = %d\n", INT_MAX);
	printf("The maximum value of UNSIGNED INT = %d\n", UINT_MAX);

	printf("\nThe minimum value of LONG = %ld\n", LONG_MIN); // 4 BYTES (que tindrien que ser 8 bytes)
	printf("The maximum value of LONG = %ld\n", LONG_MAX);
	printf("%s", "Microsoft Visual Studio uses 4 byte Compiler. Dissapointed.\n");

	printf("\nThe minimum value of FLOAT = %lf\n", FLT_MIN); // 4 BYTES
	printf("The maximum value of FLOAT = %lf\n\n\n", FLT_MAX);


	system("PAUSE");
}
*/
