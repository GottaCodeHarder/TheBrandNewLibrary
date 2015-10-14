#include <iostream>
using namespace std;

class Base
{
public:
	char* characters;
	Base(int i){ characters = new char[i]; }
	virtual ~Base(){}; // <!> Si treus el virtual aixo fa memory leak <!>
	// ~ = Alt + 126
};  // <"> Entrevista Digital Legends: Si no es virtual llavors tots els destructors de les clases derivades no es cridaran.

class Derivada : public Base
{
public:
	int* punter;
	Derivada(int i): Base (i) /*Necessari si esta en la base*/{ punter = new int [i]; } // punter es un punter que apunta a la memoria de tamany 100
	~Derivada(){ delete[] punter; }; // aquest delete ja es virtual, s'hereda. Primer s'executa aquest destructor, i despres el de la Base
};

// No es evident quan es destrueixen les clases o variables

int main()
{
	Base* a = new Derivada(10);
	delete a;
	for (int i = 0; i < 100; ++i)
	{
		Derivada b(5); // Es crea i es destrueix en cada iteració del for
	}
	system("PAUSE");
}


// El Linker va despres del Compilador. El compilador s'ho mira y corretgeix errors.
// Un error de compilacio que comença per LNK es un error de Linker. El linker es qui ho junta.
// Un error de simbolo externo, es que por ejemplo has declarado un metodo (normalmente constructor) y no lo has definido.

/*
int a = 1;
if (a || ++a) printf("%d", a++); Aixo dona printa 1. en el if el ++a no s'executa
*/

// "this" apunta a la instancia dintre de la clase, a nosaltres mateixos.

// Si tenim colisions de nom entre arguments i propietats, l'argument te prioritat.
/*
	Es per aixo que podem escriure:
	Base(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	o

	Base(int x, int y) : x(x), y(y)        x(x <- aixo es propietat)

	delete this PROHIBIDO
*/

/*
	template metaprogramming
	Pot ser molt chungo, pero nomes utilitzarem lo mes basic. Crees codi que genera codi.
	Els templates son una guia per generar mes codi. Ja que pot ser tant int, com float, com char...
*/

// RETO 1
void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
}

int swap(float a, float b)
{
	float c = a;
	a = b;
	b = c;
}

void swap(char a, char b)
{
	char c = a;
	a = b;
	b = c;
}

int main()
{
	int q = 10;
	int w = 20;
	float e = 30.0f;
	float r = 40.0f;
	char t = 'a';
	char y = 'b';
	swap(q, w);
	swap(e, r);
	swap(t, y);
	cout << q << w << e << r << t << y << endl;
	system("PAUSE");
}

// RETO 2
int a = -1;
if (++a) printf("1"); // aqui a = 0
else if (a++) printf("2"); // aqui a = 0, i despres s'incrementa a 1
else printf("3"); // Fa print 3

// RETO 3
int a = 0;
if (a = 0) printf("1");
else printf("2"); // Fa print 2
