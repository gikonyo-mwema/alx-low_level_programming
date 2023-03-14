#include <stdlib.h>
#include "main.h"
#include "stdio.h"

/**
 * free_grid - free 2d grid
 *
 * @grid: the grid to be freed
 * @height: the mumber of rows int the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
