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
	int row, col, k = 0, length = 0;
	char *str;

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

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	row = 0;
	while (row < ac)
	{
		col = 0;
		while (av[row][col])
		{
			str[k] = av[row][col];
			k++;
			col++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';

		row++;
	}
	return (str);
}
