#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 *@head: pointer to last node
 *@n:integer element in node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *start;

start = *head;
newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while (start->next)
{
start = start->next;
}

start->next = newnode;
return (newnode);
}
