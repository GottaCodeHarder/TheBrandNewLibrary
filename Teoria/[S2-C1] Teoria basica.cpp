Operadors aritmetics(+, -, *, / , %)
11 % 5 = 1
11 / 2 = 5
5 + 6 * 2 =

Els parentesis forcen la precedencia 5 + (6 * 2)
Mai dependre de la llei de la precedencia, sempre fer un codi segur amb els parentesis.

Un operador logic(== , <, >, <= , >= , || , &&, != )

En aquest cas(5 < 6 - 2) els operador aritmetics van abans, fent que donés 1: 5 < 4 = 1

(((0 && 0) || 1) && 0) = 0

c = a = b == c = (a = b)

float a = -n;
sin(double(a)); Transforma float a double per fer el sinus

double = a;
sinf(float(a)); Transforma double a float per fer el sinusfloat, si fiquem un double en un sinf sortira un warning mes greu, perque
estaras truncant el resultat


Un Cast es una transformacio dun tipus de variable a un altre
float a = 3.15 es un cast automatic
Es complicat de castejar una cadena de numeros "64" en un integral que tingui el mateix numero, ja que et tornara el valor de la taula ascii
es pot utilitzar els metodes atoi(per int) y el atof(per float) amb math.h

int a = 5;
int b(ara val 5) = a++; (ara b val 6)
a = 6;
int c(ara val 6) = ++a;
a = 7;

float a = 3.1415;
a++;
a = 4.1415;

char *c;
int *p;
hola\0
(punter p apunta a la cadena c)
0 0 0 1 0 0 0 2 0 0 0 3
p++     p++     p++

Si fem p += 2, p avançara dues posicions, y apuntara a la l(de hola)

Flow Control(if.. else..elseif, while, for, switch, do.. switch, break, continue, goto)
el break surt del bloc de codi en el que estas
el return d'alguna manera entra en aquesta categoria, encara que no es del flow control'
el goto es una cosa molt antiga, de baix nivell, fa un salt a un altre punt del codi del mateix fluxe

exemple : continue

int a = 6;
do
{
	a += 2;
	if (a < 10)
	{
		continue;
	}
	a += 2;
	if (a >= 20)
	{
		break;
	}
} while ();

En un switch si no poses break al final de cada cas, et fara tots els casos, un per un.

char* p1;
char* p2;
p1 = p2; Aixo es pot fer, pero seran a direccions de memoria randoms.

char* p1 = NULL;
char* p2;
p1 = p2; Tots dos apunten a res.

char* p1;
char* p2;
int a = (p1 - p2); //Direcció de p1 = 58, p2 = 61 per exemple
a = 3; Aixo en cas que siguien punters a caracters

int a = 3;
int * p1 = &a; Aixo em dona la direccion duna variable en memoria, no ens dona el valor
int * p2 = p1; Aixo crea un valor igual a p1 en un altre lloc.
*p2 = 5; Posa un 5 alla on estiguis apuntant.
if (*p1 == 5)

p2 = 5; En comptes de posar 5 on estava apuntant, es posa un 5 a si mateixa.

DEURES fer un swap que intercanvii la direccio a on estan apuntant de dos punters enters(int)