#include "main.h"
/**
 * create_array - array of chars, and initializes it with a specific char.
 *@size: size array
 *@c: character
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int x = 0;

if (size == 0)
{
return (NULL);
}

if (size != 0)
{
array = (char *)malloc(size * sizeof(char));

if (array != NULL)
{
while (x < size)
{
array[x] = c;
x++;
}
}

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
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}