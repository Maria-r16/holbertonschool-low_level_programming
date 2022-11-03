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

int main(int argc, __attribute__((unused)) char *argv[])
{
	int cont;

	for(cont = 0 ; cont < argc ; cont++);

	printf("%d\n", cont - 1);
	
	return (0); 	
}
