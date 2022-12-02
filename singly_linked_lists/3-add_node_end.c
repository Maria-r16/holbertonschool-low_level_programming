#include "lists.h"

/**
* add_node_end - Add a new node at the end of a list_t list
* @head: Pointer to the list
* @str: The string
* Return: The address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *last;
int coun;

if (head == NULL || str == NULL)
return (NULL);

last = *head;

newnode = malloc(sizeof(list_t));
	
if (newnode == NULL)
{
return (NULL);
}
return (newnode);
}