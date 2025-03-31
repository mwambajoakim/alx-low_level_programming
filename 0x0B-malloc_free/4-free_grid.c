#include "main.h"

/**
 * free_grid - Frees memory allocated to a 2D array.
 * @grid: Pointer to a 2D array.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
