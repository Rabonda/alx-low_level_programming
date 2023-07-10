#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 code success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
