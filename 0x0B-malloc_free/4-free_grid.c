#include <stdlib.h>
#include "main.h"

/**
* free_grid - a function that frees memory
* for a 2D array previously allocated
*
* @grid: pointer to the grid
* @height: height of grid
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int j;

for (j = 0; j < height; j++)
{
	free(grid[j]);
}
free(grid);
}
