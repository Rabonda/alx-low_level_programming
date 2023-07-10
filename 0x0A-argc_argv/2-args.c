#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return 0 code success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

