#include <stdio.h>

/**
 * array_iterator - function that executes a fn given a parameter
 *
 * @array: array of elements
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
