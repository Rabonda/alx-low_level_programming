#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:  is the name of the file.
 * @text_content: is the NULL terminated string to add
 * at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int f;
ssize_t str_length, file_write;

if (!filename)
return (-1);

f = open(filename, O_RDWR | O_APPEND);

if (f < 0)
return (-1);

if (!text_content)
{
close(f);
return (1);
}
str_length = 0;
while (text_content[str_length] != '\0')
{
str_length++;
}

file_write = write(f, text_content, str_length);

if (file_write < 0)
{
close(f);
return (-1);
}
else
{
close(f);
return (1);
}
}
