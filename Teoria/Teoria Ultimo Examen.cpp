== > G R A P H S <= =
En videojocs utilitzem maquines destats finites(tenen final) y son finites.Graus->Fleches que surten d'un estat'.
Hem de implementar una estructura de dades.

Circuit euclidia = graus parells.


class graphs
{ //DynArray
	list<node*> nodes;
	void AddNode(TYPE data);
	bool Checkpath(NodeF, NodeI);
};

struct Node
{
	TYPE data;
	list<node*> links;
	void AddLink(Node* n);
	void DeleteLink(int posicio de la llista);
};