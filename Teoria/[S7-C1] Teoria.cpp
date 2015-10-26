==< STATIC >==
|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|_|-|

	1 - S'utilitza per declarar una variable com a global'. (A dalt de tot del fitxer, fora de metodes) Limita aquella variable a nomes aquell fitxer (no poden utilitzar variables desde un altre fitxer).
	2 - Si esta dintre d'una funcio te tres qualitats'. Sempre esta al mateix lloc de memoria. Existeix fins al final del programa. Nomes té 1 unica inicialització. 
			void CobrarV() // Exemple: Una botiga te aquest metode
			{
				static int num_sold = 0; // Si no fos static cada cop que cridem la funcio estaria a 0; Ja que nomes s'inicialitza 1 cop
				num_sold++; // Mai es destrueix
			}

			int main
			{
				...
			}
			printf("%i", num_sold);
			
	3 - Si esta dintre d'un classe'.En una clase poden ser variables statiques.Fer una variable que no estigui vinculada a cap instancia.
		MyClass a;
		a.svar = 10;
		MyClass:svar = 10; // Mes correcte aixo, no cambiara depenent de les instancia.
		Sempre les inicialitzariem fora de la clase.
		// Las estaticas solo funcionan en el .cpp
		// Els metodes statics no poden accedir a cap instancia que no sigui statica


		Control memoria:	- No faci memory leaks
							- No accedeixi a memoria que no sigui seva