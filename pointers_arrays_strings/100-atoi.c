#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: pointer
* Return: the final integer value
*/

int _atoi(char *s)
{
int result = 0;
int number_positv_negativ = 1;
int i = 0;

/*checks if the first character of the string is the null*/

if (s[0] == '\0')
{
return (result); /*If so, the function immediately returns 0*/
}

/*check + or - */
if (s[0] == '-')
{
number_positv_negativ = -1;
i++;
}
else if (s[0] == '+')
{
number_positv_negativ = 1;
i++;
}

while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
/* If we encounter a non-digit character, break out of the loop */
break;
}
result = result * 10 + (s[i] - '0');
i++;
}
return (number_positv_negativ *result);
}
