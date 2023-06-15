#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: size of memory
*Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
	exit(98);
	}
	return (j);
}
