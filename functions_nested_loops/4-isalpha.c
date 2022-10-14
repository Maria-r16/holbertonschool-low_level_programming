#include "main.h"

/**
 * _isalpha - check lowercase and uppercase character.
 * @c - return one
 * Description: where the letter c and C will have a return value: one.
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
