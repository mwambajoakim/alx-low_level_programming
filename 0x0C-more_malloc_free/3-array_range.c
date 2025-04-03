#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Lower bound of the array.
 * @max: Upper bound of the array.
 *
 * Return: Pointer to the array.
 */
int *array_range(int min, int max)
{
	int *ptr, *tmp;
	int i =  min;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if(ptr == NULL)
	{
		return (NULL);
	}
	tmp = ptr;
	while(i <= max)
	{
		*tmp = min;
		tmp++;
		min++;
		i++;
	}
	return (ptr);
}
