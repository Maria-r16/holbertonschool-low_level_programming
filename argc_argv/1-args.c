#include "main.h"
#include <stdio.h>

/**
 * main -
 *
 * @argc:
 *
 * @srgv:
 *
 * Return:
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for(i = 0 ; i < argc ; i++)
		{
			printf("%s", argv[i]);
		}
	return 0;
}
