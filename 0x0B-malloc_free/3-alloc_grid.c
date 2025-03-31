#include "main.h"

/**
 * alloc_grid - Allocates memory to a 2D array.#
 * @width: Width of array.
 * @height: Height of array.
 *
 * Return: Pointer to the momry address allocated.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **alloc_mem;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	alloc_mem = malloc(height * sizeof(int));
	if (alloc_mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(width * sizeof(int));
		if (alloc_mem[i] == NULL)
		{
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			alloc_mem[i][j] = 0;
		}
	}
	return (alloc_mem);
}
