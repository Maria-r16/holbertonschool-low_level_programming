#include "lists.h"

/**
 * free_dlistint - unction that frees a list
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *list, *check;

list = head;

while (list != NULL)
{
check = list->next;
free(list);
list = check;
}
}
