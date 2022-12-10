#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: content of the file created
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int f, wt, len = 0;

if (filename == NULL)
return (-1);

f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
if (f == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len] != '\0')
{
len++;
}
wt = write(f, text_content, len);
}
if (wt == -1)
{
return (-1);
}
close(f);
return (1);
}
