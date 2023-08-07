#include "main.h"
#include <stdio.h>

/**
 * from_to - function that reads from and writes to copy.
 * @cpy: struct
 */

void from_to(copy_struct *cpy)
{

	for (cpy->rd = 1; cpy->rd; cpy->rd = read(cpy->from_file, cpy->buffer, 1204))
	{
		if (cpy->rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cpy->from);
			exit(98);
		}
		cpy->wt = write(cpy->to_file, cpy->buffer, cpy->rd);
		if (cpy->wt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cpy->to);
			exit(99);
		}
	}
}

/**
 * file_copy - function that copies one file to another.
 * @cpy: struct
 */

void file_copy(copy_struct *cpy)
{
	cpy->from_file = open(cpy->from, O_RDONLY);

	if (cpy->from_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cpy->from);
		exit(98);
	}

	cpy->to_file = open(cpy->to, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (cpy->to_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cpy->to);
		exit(99);
	}

	from_to(cpy);

	cpy->wt = close(cpy->from_file);
	if (cpy->wt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpy->from_file);
		exit(100);
	}

	cpy->wt = close(cpy->to_file);
	if (cpy->wt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpy->to_file);
		exit(100);
	}

}

/**
 * init_struct - function that initializes copy struct
 * @cpy: struct
 * @argv: arguments to put into struct
 */

void init_struct(copy_struct *cpy, char **argv)
{
	if (!cpy)
		return;

	if (!argv)
		return;

	cpy->from = argv[1];
	cpy->to = argv[2];
	cpy->buffer = malloc(sizeof(char) * 1204);

	if (!(cpy->buffer))
		exit(-1);
}

/**
 * main - main function.
 * @argc: a
 * @argv: arguments to put into struct.
 *
 * Return: 0 code success.
 */

int main(int argc, char **argv)
{
	copy_struct *cp_command;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (!argv[2])
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cp_command = malloc(sizeof(copy_struct));

	if (!cp_command)
		return (0);

	init_struct(cp_command, argv);

	file_copy(cp_command);

	return (0);
}
