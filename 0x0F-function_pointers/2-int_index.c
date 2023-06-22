#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: 1 is success
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size < 0)
	{
	return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k] != 0))
		{
		return (k);
		}
	}
	}
	return (-1);
}
