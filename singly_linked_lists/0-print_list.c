#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: string - (malloc'ed string)
* Return: the number of nodes or 0, (nil)
*/

size_t print_list(const list_t *h)
{
size_t len = 0;
int i = 0;
const list_t *c = h;

while (c)
{
if (c->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", c->len, c->str);
}
c = c->next;
len++;
i++;
}
return (len);
}

