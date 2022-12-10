#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: The head of list
 * @index: Index of element
 * Return: The nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int con = 0;

if (head == NULL)
return (NULL);

while (con < index)
{
head = head->next;

if (head == NULL)
{
return (NULL);
}
con++;
}
return (head);
}
