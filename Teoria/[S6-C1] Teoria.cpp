====< METODES AUTOMATICS / ESPECIALS >====
							
	INVESTIGAR				
Quan creem una class els compilador creara uns quants metodes encara que tu no els escriguis. Tels crea per tu.
A vegades son perillosos.	
							
class Thing					
{							
public: // Tots aquests son els metodes automatics que et crea el compilador.
	Thing();				// Constructor per defecte. Realment, no fa res, no posa les coses a 0
	Thing(const Thing&);	// Constructor de Copia, basicament fa una copia: A a1(5); A b1(a1); // classe b1 te el valor de 5 de la a1.
	~Thing();				// Destructor que es crea automaticament que esta buit i no serveix per res. Per defecte no son virtuals.
							// Aquests tres sempre es fan
							
	// Els que tenen el doble && no conten per l'examen
	Thing(Thing&&);				
	/* Aquest es creara si:	-� no hi ha el Constructor de Copia (� = fet per l'usuari)
							-� si no hi ha l'operador =
							-� si no s'ha fet el de moure
							-� si no s'ha fet el Destructor
							-si no esta marcat com a delete
							-si tots els seus membres es poden moure
	*/
	Thing operator = (const Thing &&);
	Thing operator = (Thing &&);
	/*Aquest es creara si:	-� no hi ha el Constructor de Copia
							-� no hi ha l'operador =
							-� no hi ha constructor de moure
							-� no s'ha fet el Destructor
							-si no esta marcat com a delete
							-si tots els seus membres es poden moure
							(lo mateix que amb l'altre)
	*/						
};							

// Experiments pel Contructor per Defecte.
class A
{
	int num;
};
A* pclass = new A(); // Aixo funciona

class A
{
	A(int n) : num(n){}
	int num;
};
A* pclass = new A(); // Aixo ja no funciona. error: "No arguments match the constructors of A" o algo parecido.


// Constructor de Copia ejemplo: strings
string a("hola mundo"); // <== 11 bytes alocatats al heap
// Esto tiene un char* str; y un uint capacity; <== Aixo son 8 bytes.

string b(a); // fa una copia dels 8 bytes
// Contiene char* str; uint capacity;
// Las consequencies son que hi ha 2 clases cadena, pero les dues apunten a la mateixa! <!>

-Probar:
string a("hola");
{
	string b(a);
}
a = "adios"; // No peteria perque no has alliberat la memoria