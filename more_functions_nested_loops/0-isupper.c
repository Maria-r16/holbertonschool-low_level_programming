#include "main.h"

/**
 *isupper - check if a letter is uppercase
 *@c: character to evaluate
 *Return: prints a 1 if it is uppercase, otherwise it will be 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}

	return (0);
}
