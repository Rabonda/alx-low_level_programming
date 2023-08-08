#include "main.h"

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
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
