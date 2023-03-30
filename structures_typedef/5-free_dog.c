#include "dog.h"

/**
 * free_dog - function that releases allocated memory for a dog_t
 * @d: Address of to free
 * Return: no value
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
