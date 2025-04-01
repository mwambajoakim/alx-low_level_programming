#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount of memory to allocate.
 *
 * Return: Pointer  to memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
