La diferencia entre un array i una llista esque una llista esta contigua a memoria i un array esta esparcida per la memoria.
Una llista enlla�ada ocupa mes perque te que alocatar nodes.Es mes facil afegir y treure nodes d'una llista que d'un array.
Recomanacio: Sempre que puguem, fem arrays. Un arrays es una o dos escales molt mes rapid que una llista enlla�ada. Cache miss.
Allocatadores.
Taula d'operacions en la qual quines operacions son lentes on llistes' y quines en array.

Cuando borras una lista, has de borrar primero el contenido y luegos los punteros next y prev.

El delete es casi gratis, el new pesa molt.

Pushback : son iguals en rendiment si l'array te espai al final' (diferencia despreciable).
PopBack : son iguals en rendiment(diferencia despreciable)
Insert : Llista enlla�ada es m�s rapid.
Clear : array es una mica m�s rapid.
EraseMiddle : Llista enlla�ada es m�s rapid.
Iteraci� : Array es molt molt m�s rapid.

	   ArrayEnlla�at:
			 Constructor
			 ~Destructor
			 PushBack 
			 Size(torna el numero de nodes)
			 Empty(Et diu si esta buit o no, es un bool) const
			 Clear(despres de fer deletes, es neteja la llista amb Clear)
		main()
			fer una llista que tingui 500 nodes.