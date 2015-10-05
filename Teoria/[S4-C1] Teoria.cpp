A) C de toda la vida
double a = 5;
my_func(a); // Crea una copia de a
// a = 5;

void my_func(double my_double) // pasar por valor
{
	my_double = 10; // No modifica el valor de a, modifica el valor de una variable copia de a
}

B) C de toda la vida
double a = 5;
double* b = &a; // Punter b amb la direcció de a
my_func(b); // Contenido de b
// b = 5;

void my_func(double* my_double) // pasar por valor
{
	my_double = NULL; // Hem modificat el valor de la copia del punter.
}

C) La forma de C de pasar por referencia
// a = 10;
void my_func(double* my_double) // pasar por valor
{
	*my_double = 10; // Hem modificat el valor de a
}

D) L'altra forma de C de pasar per referencia'
double a = 5;
my_func(&a);
// a = 10;

E) La forma més neta
double a = 5;
my_func(a);
void my_func(double &my_double){}
// a = 10;

Les 5 propietats d'una referencia'

1- No poden ser NULLs
2- Son inmutables
3- L'Aritmetica de punters no s'aplica
4 - Si envies una estructura, no fa falta posar la "->", nomes "."


Una vegada sa pasat per referencia son inmutables, estan lligades a una variable. 
Amb les referencies tens un 99.99% de seguretat que no te un valor NULL.

void my_func(double &my_double)
{
	double = b;
	my_double = &b; // < ! > PETA

	(my_double == NULL) // No es pot fer
}

my_double += 10; // Avances 80 posicions, pero al final val a val 15
*my_double[10] = 15; // Pot sortir error perque pots estar sobreescrivint memoria "Ves a la ultima posicio i posa-li un 15"


struct point
{
	int x, y;
};

point a;
f(&a);

void f(point* p) // punter
{
	p->x; // Correcte perque es un punter.
	p.x; // Incorrecte, perque es un punter, y aixo es podria aplicar nomes amb les referencies (&)
}

Les referencies son utils per simplificar tot el llenguatge dels arguments
double a[1000]; // Tenim 8000 bytes
my_func(&a);
void my_func(double *my_double); // Tenim un punter a 8000 bytes, y no 16000 bytes que seria si for per valor.


// CARACTERISTICA DE LA CLASSE =========
SOBRECARREGA
class a
{
	int f(int a); // Si hi ha una sobrecarrega
	void f();
	a operator += (const a& p)
	{
		return *this; // Retorna el valor del punter a tu mateix
	}
};

Es pot sobrecarregar un munt de coses, fins i tot un cast. Es pot sobrecarregar un new i un delete.

class Point
{
	int x, y;
};

Point a, b, c;

c = a - b; // < ! > Invalid! No sap com fer-ho


class Point
{
	int x, y;
	Point operator - (Point p) const
	{
		Point result;
		result.x = x - p.x; // this->x en comptes de x es pot fer
		result.y = y - p.y; // this->y en comptes de y es pot fer
	}
};