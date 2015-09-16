

char ocupa 1 byte, que son 8 bits[0 0 0 0 0 0 0 0], que vol dir que te un rang de 127 a -128. el unsigned char te un rang de 0 a 255.
[Al ser signed s'utilitza el primer bit per dir si es positiu -0- o negatiu -1-]

Transformar un int a una cadena char de la taula ASCII:

char transformToChar(int) //entra un NUMERO int, surt un NUMERO en char.
{
	return 0 + 48;
}

int ocupa(normalment) 4 bytes, que son 32 bits, que vol dir que te un rang de -2.147.483.648 +2.147.483.647, que es un rang molt gran.
short(short int) es un enter petit, 2 bytes, que son 16 bits, que te un rang de 65.535 si es unsigned, y amb signe es de -32.768 a +32.767.
long(long int) es un enter molt gran, 8 bytes, que son 64 bits, amb un rang molt gran.

float (representa decimals), te una mateixa informacio que podria tenir un int o un char en 0 y 1. Té 4 bytes amb un rang de 1.17549^-38
double es el germa gran del anterior. Té 8 bytes.
long double es el germa gegant.

bool no es una variable, té 1 byte. Encara que només s'utilitza 1 bit (1 y 0 per dir true or false), es perque l'ordinador esta preparat per gestionar bytes.
	Té un valor numeric.

	Experiment.
	bool a = 49;
if (a == false)
{

}

string no es una variable, no té limit de bytes, ja que el limit es el tamany de la cadena.
struct no es una variable.
	Totes les variables empaquetades en un struct estan contigues(juntes) a memoria. Si petes la variable anterior llavors sobrescrius la seguent variable.

assert no es una variable, es una funcion que si no cumple los requisitos llama al sistema para que pare el programa.

punters void*, char*, long*, double*, struct textura*... tots ocupen la mateixa memoria. Son direccions a memoria, y ocupen tanta memoria com numero de direccions maxim
que hi ha a memoria.Si demanes un int* llavors agafara els 4 bytes de la direcció apuntada y tels llegira com a int, si demanes un char* a la mateixa direcció agafara
el primer char y tel llegira com un char.

void es fa servir per 3 coses a C.Vol dir "nada". Retorna res de la funció. Es un punter que no sabem quin tipus es.

Un doble punter agafa (senyala) la direcció d'un punter a una cosa.

DEURES: Fer un programa que fagi printf dun char. Mirar llibreria Limits.h, serveix per veure els limits de memoria en aquell moment. FLT_MIN float minim representable.
		Quants bytes te el nostre char y el nostre long.Confirmar tamany d'un punter.

Si escrius un 44, y no li especifiques que es, com pot ser qualsevol numero, ell dira que es un int.
Si escrius un 0.1, y no especifiques que es, com pot ser float o double, ell dira que es un double. (sempre el pitjor cas)
Si escrius un 0.1f, ja li estas especificant que es un float.
En el exemple:
	float a = 0.1 + 0.3
		Ell ha de posar el 0.1 y 0.3 en dos registres per efectuar la operacio, els posará en dos doubles, fara la operacio y el forces a transformarlo en un float.
	float a = 0.1f + 0.3f

Si escrius un 44l el ordinador el interpretara com un long.
Si escrius un 44ul el ordinador el interpretara com un unsigned long.
'a' es un char caracter a, amb un valor 97.
'\0' aixo es un byte(perque es char). 0 aixo son quatre bytes(perque es un int).
"a" es un string.

enum enumerador. Es una cosa per fer mes facil la programacio, fa les coses llegibles. 
enum items{
	DOUBLE_CORDA, // Posicio 0
	BOTES,		  // Posicio 1
	GANXO,        // Posicio 2
	ESCOPETA      // Posicio 4
};

enum items{
	DOUBLE_CORDA = 10, // Posicio 10
	BOTES,             // Posicio 11
	GANXO = -15;	   // Posicio -15
	ESCOPETA;		   // Posicio -14
};

if (item == GANXO)
   (item == 3)

   printf("%i", BOTES); // El programa escriuria un 1 (tenint en compte la primera llista d'enums)

unsigned long long a; // Existeix

typedef permet tenir alies a tipus de alies.
typedef unsigned int uint; // Tots els "uints" es reconeixeran com a unsigned ints.

Per saber quin tipus de dades es exactament cada dada, es fan typedef de int32(32 bits), int64(64 bits), int16(16 bits)

const no te gaire funcio en C, pero si en C++.
	const int = 4; // Aquest int sempre sera 4.
...
a = 5; <<= == ERROR DE COMPILACIO

int* b = &a; // He creat un punter "b" amb la direcció de "a".
*b = 5;      // Cambio el contingut de "a" pasantme pel forro el const a partir del punter
// a == 5;

