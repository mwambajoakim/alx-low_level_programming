#include "function_pointers.h"

/**
 * int_index - Searches for an integer and returns its index.
 * @array: Pointer to array.
 * @size: Size of the array.
 * @cmp: Pointer to a function.
 *
 * Return: Index of integer for which cmp is not 0,
 * -1 if size <= 0 and if there is no matching element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*cmp_tmp)(int);
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || (*cmp) == NULL)
	{
		return (-1);
	}
	cmp_tmp = cmp;
	for (i = 0; i < size; i++)
	{
		if ((*cmp_tmp)(array[i]))
		return (i);
	}
	return (-1);
}
