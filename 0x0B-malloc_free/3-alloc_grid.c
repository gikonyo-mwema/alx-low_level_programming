#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: row
 * @height: column
 *
 * Return: NULL on failure, width and height is 0 or (-)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k, allo;

	allo = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			allo = 1;
			break;
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	if (allo == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(grid[k]);
		}
		free(grid);
	}
	return (grid);
}
