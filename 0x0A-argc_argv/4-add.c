#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: returns 0 code success.
 */
int main(int argc, char *argv[])
{
	int row, col, sum = 0;

	row = 1;
	while (row < argc)
	{
		col = 0;
		while (argv[row][col] != '\0')
		{
			if (!isdigit(argv[row][col]))
			{
				printf("Error\n");
				return (1);
			}
			col++;
		}
		sum += atoi(argv[row]);
		row++;
	}
	printf("%d\n", sum);
	return (0);
}
