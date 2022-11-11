#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type
 * @name: type char
 * @owner: type char
 * @age: type float
*/
struct dog
{
char *name;
char *owner;
float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/** previous prototypes to use in point 4:*/
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
