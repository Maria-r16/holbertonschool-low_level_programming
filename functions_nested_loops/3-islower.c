#include "main.h"

/**
 *_islower - check the lowercase character.
 * @c: return one for is letter lowercase.
 * Description: where the letter c will have a return value: one.
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

