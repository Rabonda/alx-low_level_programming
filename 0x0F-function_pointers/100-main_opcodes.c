#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes
 * of its own main function.
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: returns opcodes of its own main function.
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (bytes--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
