#include "main.h"

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: Size of array.
 * @c: Character to fill array with.
 *
 * Return: Pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
