#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function creates an array of chars
 *
 *@size: size of the array
 *@c: character to be initialized
 *
 *Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
