#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to a 2D array
 *
 *@width: column of array
 *@height: rows of array
 *
 *Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, mul, hold = 0;
	int **grid;

	mul = width * height;
	grid = (int **)malloc(mul * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < mul; i++)
	{
		grid[i] = (int *)malloc(mul * sizeof(int));
		*grid[i] = hold;
	}

	return (grid);
}
