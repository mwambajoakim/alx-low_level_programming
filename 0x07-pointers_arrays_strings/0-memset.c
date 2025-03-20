#include "main.h"

/**
 * _memset - Fills n bytes of b to s.
 *
 * @s: Pointer to string.
 * @b: Values to fill memory area with.
 * @n: Number of bytes.
 *
 * Return: Pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (p);
}
