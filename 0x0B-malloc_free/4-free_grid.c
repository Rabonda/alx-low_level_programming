#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that use free function on previous grid
 * @grid: 2 dim array to free
 * @height: input height
 * Return: free function on previous grid
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid != NULL || height != 0)
	{
		for (row = 0; row < height; row++)
			free(grid[row]);

		free(grid);
	}
}
