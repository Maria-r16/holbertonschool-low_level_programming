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
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;
	
	while(i < argc)
	{
		i++;
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
