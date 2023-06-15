#include "main.h"
#include <stdlib.h>
/**
 * *array_range - create array of integers
 * @min: min range of stored vals
 * @max: max range of stred vals and no of elements
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;
	return (ptr);
}
