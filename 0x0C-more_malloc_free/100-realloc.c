#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that reallocates a memory
 * block using malloc and free.
 * @ac: integer input variable.
 * @av: double pointer array.
 * Return: returns a memory block using malloc and free.
 */
char *argstostr(int ac, char **av)
{
	int row, col, count = 0, len = 0;
	char *arr_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col]; col++)
			row++;
	}
	len += ac;

	arr_str = malloc(sizeof(char) * len + 1);
	if (arr_str == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
	for (col = 0; av[row][col]; col++)
	{
		arr_str[r] = av[row][col];
		count++;
	}
	if (arr_str[count] == '\0')
	{
		arr_str[count++] = '\n';
	}
	}
	return (arr_str);
}
