#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: text content of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f, wt, len = 0;

if (filename == NULL)
return (-1);

f = open(filename, O_APPEND | O_WRONLY);

if (f == -1)
return (-1);

if (text_content != NULL)
{
while(text_content[len] != '\0')
{
len++;
}

wt = write(f, text_content, len);

if (wt == -1)
return (-1);
}
close(f);
return (1);
}
