#include "main.h"
#include <stdio.h>

/**
 * error_file - a function that checks if files can be opened.
 * @file_from: file from.
 * @file_to: file to.
 * @argv: arguments vector.
 * Return: void no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main program that check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0 code success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_chars, write_file;
	char bufer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	
	for (num_chars = 1024; num_chars == 1024; num_chars = read(file_from, bufer, 1024))
	{
		if (num_chars == -1)
			error_file(-1, 0, argv);
		write_file = write(file_to, bufer, num_chars);
		if (write_file == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
