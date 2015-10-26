Funcio INLINE

INVESTIGAR Inline
Utilitzarlo amb molt de compte, es posa on tu vegis que augmentaria la velocitat. Ha de anar obligatoriament al .h <!>

Avantatges:			-Es fa mes rapid.

Inconvenients :		-Si utilitzes massa inline augmentes el tamany del.exe(si es fa gran, el joc va mes lent)
					-No pots utilitzar switch, bucles, static, goto...

inline void function() // Es una crida a una funcio, li pots enviar arguments (dif macro) y retorna valors
{
	printf("hola");
}

// No es pot declarar al .cpp, ha de estar al .h

int main()
{				// La funcio inline ja esta copiada.
	function(); // Gracies al inline no va al void, sino que fa directament printf
	function(); // Enganxa la direccio de memoria del printf
	function();
}

INVESTIGAR Cache
Cache: Estas fent procesos els estas guardant, i si els utilitzes despres, va a la cache i els carrega.
	Catch hit : Estas llegint una dada dintre de la cache(finestra duna area de la memoria)
	Catch miss : Estas llegint una dada fora de la cache, i el Cache ha de moures amb totes les dades adalt i abaix per llegirla.

template <class DATA> // Nomes funcionen al .h, no tindrien que funcionar en els .cpp (.hpp es un cpp templaritzat)
void swap(DATA &a, DATA &b) 
{ 
	DATA c;
	c = a;
	a = b;
	b = c;
}
(Un .h pot tenir mes de un .cpp)
Quina es la diferencia entre fer tota la nostra clase cadena en un .h i un .cpp? 1.Es mes practic (facil de llegir).
La velocitat dexecucio es la mateixa. 2. Si el .h es mes petit, el temps de compilacio es mes petit.
(.h declaracio, .cpp definicio) Cada .cpp que tinguis, compilara el .h un altre cop. Nomes es acceptable definir algo en el .h si es molt molt petit.
Guanyem en claredat i temps de compilacio.
Si fem un canvi en un .h, es compilaran un altre cop tots els .cpp que incluin el .h. El compilador no compila un arxiu no modificat.

//#ifndef es la proteccio de capçalera
TYPEDEF serveix per abreviar codi

pragma once INVESTIGAR, fa el codi poc portable, ja que nomes val per Microsoft.

(Per els directoris darxius, windows utilitza " \ ", linux, mac etc utilitzen " / ")

INVESTIGAR #ifdef

#ifndef __STRING_H__ // Esta definido __STRING_H__?
#define __STRING_H__ // Si on esta definido, lo defino.

La # es una directiva del pre-procesador, abans darribar al compilador. De fet, al compilador no li arriben #.



DEURES: Pel dilluns Zork
Si saps C++ aprendras en 1 setmana C#, si saps C# son 6 mesos per aprendre C++. C++ es el pare de tots els llenguatges.