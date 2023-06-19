#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of characters,
 * and initializes it with a character
 * @size: size of the array
 * @c: the character to be initialized
 * Return: the initialized character
*/

char *create_array(unsigned int size, char c)
{
unsigned int count;

char *arr = (char *)malloc(size * sizeof(char));

for (count = 0; count < size; count++)
{
	arr[count] = c;
}

if (size == 0)
{
	return (NULL);
}
return (arr);
}