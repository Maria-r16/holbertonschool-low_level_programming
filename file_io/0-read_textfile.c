#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: points to file that we will be receiving
 * @letters: size of letters to read in
 * Return: the actual number of letters it could read and print
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

int f = 0, rd = 0, wt = 0;

char *buffer = malloc(sizeof(char) * letters);

if (filename == NULL)
{
return (0);
}

f = open(filename, O_RDWR);
if (f == -1)
{
return (0);
}
rd = read(f, buffer, letters);
if (rd == -1)
{
return (0);
}
wt = write(STDOUT_FILENO, buffer, rd);
if (wt == -1)
{
return (0);
}
close(f);
free(buffer);

return (wt);
}

