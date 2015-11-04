== < ARRAY DINAMICO > ==

int i = 5; // const int i = 5 funciona, ha de ser unsigned, -5 no compila
int data[i]; // Primera posicio es 0, la ultima es 4
// Aixo per si sol no compila, perque la i no es constant, ja que pot cambiar en qualsevol moment
int* data = new int[i];
// Aixo si que funciona
int* data2 = new int[i + i];

memcpy(data2, sizeof(data), data); // Aixo es una funcio molt rapida per copiar, substitueix el for per Copiar
// El 5 es en Bytes. (sizeof(data))
data2++; // Avançar una posicio en l'array
data2[3] //	Cuarta posició, ja que comença des de la 0.
data2 += 10000; // 40.000 bytes mes endavant
data2[10000]; // Sortira un error de Run-time si ens sortim de la aplicacio

char data[5] = "hola"; // Volem ficarli "mundo" perque quedi "homundola"
// Hem de fer "ho_ _ _ _ _ la" per despres ficarli mundo

// Els arrays estan contigus a memoria
delete[] data;
delete[] data2;
