#include <iostream>
#include <string.h>
using namespace std;

void strlen(char *word)
{
	int count = 1;
	while (word[count++] != '\0')
	{
		count++;
	}

	cout << "String size: " << count << endl;
};

int main()
{
	char *sword;
	sword = "Marina";
	strlen(sword);
	system("PAUSE");
}