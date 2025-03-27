#include "main.h"

/**
 * _strncat - Concatenates two strings, dest and src.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of src bytes.
 *
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = n;
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && i > 0)
	{
		i--;
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
