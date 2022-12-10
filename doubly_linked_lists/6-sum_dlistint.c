#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a linked list.
 * @head: The head of list
 * Return: The sum of n
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}

return (sum);
}
