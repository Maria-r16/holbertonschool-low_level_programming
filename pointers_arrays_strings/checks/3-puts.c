#include "main.h"

/**
* _puts - print string followed by a new line
* @str: pointer
*/

void _puts(char *str)
{
	printf("%s\n", str);
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char *str;

str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);
return (0);
}
