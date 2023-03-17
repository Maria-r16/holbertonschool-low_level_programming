#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @s: string to capitalize.
 * Return: capitaliza.
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)

				*(s + i) -= 'a' - 'A';

			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (s);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
