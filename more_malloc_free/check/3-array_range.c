#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 * @min: int type
 * @max: int type
 * Return: the pointer to the new array or NULL if FAIL malloc
 * and if min is elderly to max.
*/
int *array_range(int min, int max)
{
int *array;
int i = 0;
int size;

if (min > max)
return (NULL);

size = (max - min) + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
{
return (NULL);
}

while (i < size)
{
array[i] = min;
i++;
min++;
}
return (array);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
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
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
