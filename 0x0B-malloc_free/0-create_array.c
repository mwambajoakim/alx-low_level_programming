#include "main.h"

/**
 * create_array - a function that creates an array of characters,
 * and initializes it with a character
 * @size: size of the array
 * @c: the character to be initialized
 * Return: the initialized character
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int count;

arr = malloc(size * sizeof(char));

for (count = 0; count < size; count++)
{
	arr[count] = c;
}

return (arr);
}
