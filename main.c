#include <stdio.h>
#include <pthread.h>

#define VERSION "0.0.1"

/* Inicio do Codigo Principal */
int main ()
{
	printf("Hello World\n");
	for (int i = 0; i < 10; i++)
	{
		printf("OPAAA %d!\n", i+1);
	}
	printf("Mais uma bobagem sem motivos!!!\n");
	printf("Testando Alias!!\n");
	printf("Author: Caio Vinicius de Toledo\n");
	printf("Version %s\n", VERSION);
}
