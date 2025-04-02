#include "main.h"

/**
 * _memset - Fills memory are with a constant byte.
 * @ptr: Pointer to memory area.
 * @c: Byte to fill memory area with.
 * @n: size of byte n used.
 *
 * Return: Pointer to memory area.
 */
char *_memset(char *ptr, int c, unsigned int n)
{
	unsigned int i = 0;
	char *tmp = ptr;

	while (i < n)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (tmp);
}

/**
 * _calloc - Allocates memory fr an array using malloc.
 * @nmemb: Number of members in array.
 * @size: ize of the array.
 *
 * Return: Pointer to memory location.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
