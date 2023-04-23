#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: the array containing elements
 * @size: size of thr array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)

	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
