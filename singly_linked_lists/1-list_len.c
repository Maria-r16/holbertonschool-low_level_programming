#include "lists.h"

/**
* list_len - number of elements in a linked list_t list
* @h: pointer
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
int i = 0;
const list_t *c = h;

while (c)
{
c = c->next;
len++;
i++;
}
return (len);
}
