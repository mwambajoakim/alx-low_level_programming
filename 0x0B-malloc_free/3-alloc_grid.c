#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - a function that returns a pointer
* to a 2 dimensional array  of integers
*
* @width: width of array
* @height: height of array
* Return: nothing
*/

int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(**array));
		if (array[i] == NULL)
		{
			while (--i >= 0)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
