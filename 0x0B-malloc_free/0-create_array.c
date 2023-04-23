#include "main.h"
#include <stdlib.h>

/**
*create_array - function that creates an array
*@size: size of the array
*@c: character to be initialized
*Return: character c
*/

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *str;

	if (size == 0)
	{
	return (NULL);
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == 0)
	{
	return (NULL);
	}
	k = 0;
	while (k < size)
	{
	c = *(str + k);
	k++;
	}
	return (str);
}
