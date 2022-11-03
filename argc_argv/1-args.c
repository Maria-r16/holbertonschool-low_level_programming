#include "main.h"
#include <stdio.h>

/**
 * main -
 *
 * @argc:
 *
 * @argv:
 *
 * Return:
 */

int main(int argc, char *argv[])
{
	int cont;
	argc = cont;

	for(cont = 1 ; argv[cont] == '\0' ; cont++);

	printf("%d\n", cont - 1);
	
	return (argc); 	
}
