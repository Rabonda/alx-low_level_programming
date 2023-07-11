#include "main.h"
#include <stdlib.h>
/**
  *argstostr - function that concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: concatenates all arguments of the program.
  */
char *argstostr(int ac, char **av)
{
	int row, col, count = 0, length = 0;
	char *string_concatenate;

	if (ac == 0 || av == NULL)
		return (NULL);

	row = 0;
	while (row < ac)
	{
		for (col = 0; av[row][col]; col++)
			length++;
		row++;
	}
	length = length + ac;

	string_concatenate = malloc(sizeof(char) * length + 1);
	if (string_concatenate == NULL)
		return (NULL);

	row = 0;
	while (row < ac)
	{
		col = 0;
		while (av[row][col])
		{
			string_concatenate[count] = av[row][col];
			count++;
			col++;
		}
		if (string_concatenate[count] == '\0')
			string_concatenate[count++] = '\n';

		row++;
	}
	return (string_concatenate);
}
