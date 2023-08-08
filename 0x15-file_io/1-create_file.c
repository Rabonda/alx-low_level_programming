#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created
 * file can not be written, write “fails”, etc…).
 */

int create_file(const char *filename, char *text_content)
{
int file, str_length;
ssize_t file_write;

if (!filename)
{
return (-1);
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (file == -1)
{
return (-1);
}

if (!text_content)
{
close(file);
return (1);
}

str_length = 0;
while (text_content[str_length] != '\0')
{
str_length++;
}

file_write = write(file, text_content, str_length);

if (file_write == -1)
{
close(file);
return (-1);
}
else
{
close(file);
return (1);
}
}
