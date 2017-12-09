#include <stdio.h>
#include <pthread.h>

#define VERSION "0.0.1"

/* Inicio do Codigo Principal */
int main ()
{
	printf("Hello World\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Contador: %d!\n", i+1);
	}
	printf("Author: Caio Vinicius de Toledo\n");
	printf("Version %s\n", VERSION);
}
