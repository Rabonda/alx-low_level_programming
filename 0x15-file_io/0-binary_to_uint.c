#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <main.h>

/**
 * read_textfile - function that converts a binary number to
 * an unsigned int.
 *
 * @filename: name of the file.
 * @letters: number of characters to read.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string
 * b that is not 0 or 1 b is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int str_length, wchars;
	char *bufer;

	if (!filename || letters == 0)
		return (0);
	bufer = malloc(sizeof(char) * (letters));
	if (!bufer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(bufer);
		return (0);
	}
	str_length = read(file, bufer, letters);
	if (str_length == -1)
	{
		free(bufer);
		close(file);
		return (0);
	}

	wchars = write(STDOUT_FILENO, bufer, str_length);
	free(bufer);
	close(file);
	if (wchars != str_length)
		return (0);
	return (str_length);
}
