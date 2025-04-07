#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: Pointer to array.
 * @size: ize of the array.
 * @action: Pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*action_tmp)(int);
	size_t i;

	if (size <= 0)
	{
		return;
	}
	if (array == NULL || (*action) == NULL)
	{
		return;
	}
	action_tmp = action;
	for (i = 0; i < size; i++)
	{
		(*action_tmp)(array[i]);
	}
}
