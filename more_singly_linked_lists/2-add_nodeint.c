#include "lists.h"

/**
 * add_nodeint - add node list
 * @head:pointer to node
 * @n:int to refill
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->next = *head;
newnode->n = n;
*head = newnode;
return (newnode);
}