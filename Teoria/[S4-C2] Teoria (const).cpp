Uso de const, antes de la funcion, en la llamada de argumentos y al final de la funcion.

Al inici(const int) vol dir que no modifica el valor de sortida(return *this), al final vol dir que no modifica el valor d'entrada' (arguments)
Si esta dentro del argumento(const Point& a) significa que solo estamos leyendolo.

Constructor.Defineix com es construeix una clase.

[S6-C1:Examen]
En const char* const cadena no es pot modificar res de res, en const char* cadena pots fer cadena++ i cadena = NULL.
Amb char* const cadena pots fer *cadena = NULL.

const correctness: es quan un programa te tots els const que ha de tenir. Es considera mes robust que un que no te.
Els const afecten a la execucio de un programa ? En principi NO, encara que deixes que hi hagui certes optimitzacions(entra a master).
Es mes rapid de desenvolupar, apareixen menys bugs.

