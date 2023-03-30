#include "dog.h"

/**
 * _strlen - gets len of str
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}

/**
 * _strcpy - copies string from dest to src
 *
 * @dest: destination of string
 * @src: source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *j = dest;

while (*src)
{
*dest++ = *src++;
}
*j = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));

	if (!d)
	{
	return (NULL);
	}
	d->name = malloc(_strlen(name) + 1);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(_strlen(owner) + 1);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);
	return (d);
}
