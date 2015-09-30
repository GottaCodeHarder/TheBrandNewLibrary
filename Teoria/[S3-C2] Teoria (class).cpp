Les classes

Un atribut public pot ser utilitzat per la mateixa classe, una classe derivada y altres classes. Si podem deixar algun atribut public el deixem.

Un atribut private nomes pot ser utilitzat per la mateixa classe.

Un atribut protected pot ser utilitzat per la mateixa classe y derivades.

friend sutilitza per fer dues classes amigues.

class A
{
	int hola;
	friend B; // B pot veure de A, pero de A no pot veure coses de B. Fins i tot B pot accedir a private.
}; A mi_clase; //Aixo es una instancia.
class B
	int metode(&A mi_clase)
	{
		mi_clase.hola = 5;
	}

La diferencia entre una classe y un struct es que els struct tots els atributs son per defecte publics. Els structs serveixen per empaquetar dades.
Encara que aixo es nomes una diferencia conceptual, en realitat un struct es com una classe publica 100%.

instancia = crear una classe.

Herencia = especialitzar una classe.

Hi ha 3 nivells per fer una herencia: 
class A2: public A //A2 pot accedir a public i a protected

class A2: protected A //A2 pot accedir a public i a protected. Las coses publiques en A, en A2 es converteix en protected, per a que altres classes no accedeixin.

class A2: private A //A2 pot accedir a public i a protected. Les coses publiques en A, en A2 es converteixen en private. El fill de A2 no podria rebre res.

Herencia multiple.

class C: public A, public B

	Amb aixo sabem les regles dencapsulacio y la herencia.

	Polimorfisme. Fa que un mateix metode produeixi resultats diferents depenent de la especialitzacio de la classe.
	No es necessari que tu hagis de coneixer aquesta especialitzacio.

punter entitat. 

El metodes virtuals ocupen una mica mes que els metodes a seques ja que es guarda una taula virtual, que es on sapunta cap a on apunta.
virtual pura es un metode que tu declares pero no defineixes, pero obligues a que tots els fills que tingui la defineixin.
Es defineix:
virtual float getArea() = 0; // es una interfaç
