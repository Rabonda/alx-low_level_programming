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
	int file;
	ssize_t str_length, file_write;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file < 0)
		return (-1);

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

	if (file_write < 0)
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
