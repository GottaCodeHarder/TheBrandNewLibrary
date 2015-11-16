La diferencia entre un array i una llista esque una llista esta contigua a memoria i un array esta esparcida per la memoria.
Una llista enllaçada ocupa mes perque te que alocatar nodes.Es mes facil afegir y treure nodes d'una llista que d'un array.
Recomanacio: Sempre que puguem, fem arrays. Un arrays es una o dos escales molt mes rapid que una llista enllaçada. Cache miss.
Allocatadores.
Taula d'operacions en la qual quines operacions son lentes on llistes' y quines en array.

Cuando borras una lista, has de borrar primero el contenido y luegos los punteros next y prev.

El delete es casi gratis, el new pesa molt.

Pushback : son iguals en rendiment si l'array te espai al final' (diferencia despreciable).
PopBack : son iguals en rendiment(diferencia despreciable)
Insert : Llista enllaçada es més rapid.
Clear : array es una mica més rapid.
EraseMiddle : Llista enllaçada es més rapid.
Iteració : Array es molt molt més rapid.

	   ArrayEnllaçat:
			 Constructor
			 ~Destructor
			 PushBack 
			 Size(torna el numero de nodes)
			 Empty(Et diu si esta buit o no, es un bool) const
			 Clear(despres de fer deletes, es neteja la llista amb Clear)
		main()
			fer una llista que tingui 500 nodes.