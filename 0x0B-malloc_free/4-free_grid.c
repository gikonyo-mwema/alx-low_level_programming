#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid : double pointer
 * @height: rows
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(*(grid + j));
	}
	free(grid);
}
