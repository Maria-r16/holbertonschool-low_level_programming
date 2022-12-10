#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: struct list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
size_t len = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
len++;
i++;
}
return (len);
}
