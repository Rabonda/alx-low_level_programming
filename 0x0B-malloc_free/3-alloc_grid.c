#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that loop to make grid
 * @width: width input variable.
 * @height: height input variable
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	row = 0;
	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			while (row >= 0)
				free(grid[row--]);
			free(grid);
			return (NULL);
		}

		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}

		row++;
	}

	return (grid);
}
