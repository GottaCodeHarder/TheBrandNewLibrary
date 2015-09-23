Podem tenir array de char, double, int, struct, class, punters...
int a[15]; tenim 15 int consecutius a memoria recollits per un array. Esta al stack.
int * a = new int[15]; esta al hib
stack
hib
Les funcions amb un # abans son funcions del pre - processador.
a[15] = 100; == *((&a) + 15) = 100;
si sescriu p[400] = 5.15f; et petara al executar, si es fa amb un new no

char* a = "hola"; // h o l a \0
char a[] = "hola";
Son equivalents

char* a[3]; Es legal, son 3 punters a chars, tenim 3 direccions a memoria en comptes de 3 caracters.
0x213A 0x4135 0x0DF2

int main(int argc, char* argv[]) Aixo en el main es la linea darguments quan ens han cridat, son dos arguments que tenvia windows.
El argc val 4, argv apunta primer a (argv[0]) "C:/system/hola.exe"

new = malloc
delete = free

struct esta a stack.

	DEURES fer funcio que rebi un punter a rectangle y doni la seva area, fer el començament de zork(estructura duna habitacio(room) i 
	nomes aceptara el comand "quit")