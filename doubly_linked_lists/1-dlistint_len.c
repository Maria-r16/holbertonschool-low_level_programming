#include "lists.h"

/**
* dlistint_len -  function that returns the number of elements
* in a linked list
* @h: struct list
* Return:list len
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
int i = 0;

while (h)
{
len += 1;
h = h->next;
i++;
}
return (len);
}
