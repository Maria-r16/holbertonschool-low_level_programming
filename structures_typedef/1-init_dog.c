#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize the variable "struct dog"
 *
 * @d: structure
 * @name: name the struct dog
 * @age: age the struct dog
 * @owner: owner the struct dog
 * Return: --
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
