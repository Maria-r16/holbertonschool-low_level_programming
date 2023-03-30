#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: returns pointer or NULL if malloc fails
 * or if nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointer = malloc(nmemb * size);

if (pointer == NULL)
{
return (NULL);
}

while (i < nmemb * size)
{
pointer[i] = 0;
i++;
}
return (pointer);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}