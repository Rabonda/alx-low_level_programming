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

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int byte = atoi(argv[1]);

	while (byte--)
		printf("%02hhx%s", *p++, byte ? " " : "\n");
	return (0);
}
