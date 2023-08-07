#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: relative or absolute path of the file.
 * @letters: read and print the number of letters.
 *
 * Return: returns the POSIX standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *toPrint;
	ssize_t read_file, write_file;
	int file_rd;

	if (!filename)
		return (0);

	toPrint = malloc(sizeof(char) * letters);
	if (!toPrint)
		return (0);
	file_rd = open(filename, O_RDONLY);
	if (file_rd < 0)
	{
		free(toPrint);
		return (0);
	}
	read_file = read(file_rd, toPrint, letters);
	if (read_file < 0)
	{
		free(toPrint);
		return (0);
	}
	if (file_rd > 0)
		write_file = write(STDOUT_FILENO, toPrint, read_file);
	if (write_file < read_file)
	{
		free(toPrint);
		return (0);
	}
	write_file = close(file_rd);
	if (write_file < 0)
	{
		free(toPrint);
		return (0);
	}
	free(toPrint);
	return (read_file);
}
