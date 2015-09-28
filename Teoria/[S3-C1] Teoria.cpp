INVESTIGAR Investigar que es union.Sortira al test[1 pregunta]
(extern int a; La declaro aqui, pero es d'un altre cpp'.Fa falta #include, si no ho fiquesis nomes estaria declarada.) NO SURT
register volatile, quan sutilitza en dos programes static

INVESTIGAR funcions interessant:
memset
memcpy
memcmp
formen part de les llibreries estandards y son molt utils.

Hem fet el C "K&R" que es el C89
El C99 que va ser aprovat al 2000 permet el comentari en //, deixen les declaracions disperses (declarar les variables en qualsevol moment)
El C11 permet el char16_t i el char32_t, permet la struct anonima(sutilitzen dintre daltres structs), sprintf_s
El C15 que encara no ha sortit y diuen que tindra una bona covertura del C11.

Bjarne Stroustrup es un personatge del C++.

La orientacio a objectes té 4 pilars. 1 - Encapsulació. 2 - Herencia. 3 - Polimorfisme. 4 - Sobrecargues.

- Encapsulacio es que puguis ocultar dades entre objectes, public i private.

- Herencia es que els objectes derivin de objectes i mantinguin atributs i metodes

- Poliformisme el compilador sap quina funcio agafar(? ) INVESTIGAR

- Overloading es pot sobrecarregar el = , != , == , <= , >= , ->, ., i fins i tot els casts.
player->shoot(enemic* e);
player->shoot();

Es diferent C++ que C, en C es poden declarar funcions despres de ferles servir, en C++ aixo es ilegal, han de ser declarades al inici.

El namespace no existeix a C, permet fer un bloc de noms i simbols.No fa falta escriure std::cin o std : cout amb using namespace std;

Control de exepcions, fa el codi mes lent, ja que controla que tot vagi be, amb try{ i }catch.

els enum son namespace.

enum mad_type{
	ORTHOGONAL,
	ISOMETRIC
};

enum mad_type type = mad_type::ISOMETRIC;

el template es util

Les referencies es un concepte que te C++ que no te C.ES MOLT IMPORTANT
Podriem programar tot el que volguessim sense referencies, pero ens fa la vida mes facil.

Sempre que pases un argument a una funcio es fa una nova copia d'aquell argument a l'stack

A)
{
	int a = 5;
	my_func(a);
	//a == 5;
}

int my_func(int num)
{
	return num++;
}

B)
{
	int a = 5;
	my_func(&a);
	//a == 6;
}

int my_func(int* num)
{
	return *num++; // Si fos return num++; llavors nomes retornaria la direccio de memoria augmentada, aixi retorna el valor augmentat
}

Nomes a char no es viable fer un punter a char.

ZORK: Les habitacions ja tenen descripcio, fer un struct sortida.dintre duna habicio fem quatre sortides al N W S E, que son punters a structs de sortida.command : look(nombre descripccion y salidas)