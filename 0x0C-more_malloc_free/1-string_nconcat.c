#include "main.h"

/**
 * _strncat - Concatenates n bytes of src to dest
 * @dest: Pointer to string.
 * @src: Pointer to string.
 * @n: Number of bytes.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, unsined int n)
{
	char *tmp = dest;
	int i = 0;

	while (*tmp != '\0')
	{
		tmp++;
	}
	while (i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}

/**
 * string_nconcat - Concatenates s1 with n bytes of s2.
 * @s1: Pointer to string.
 * @s2: Ponter to string.
 * @n: Number of bytes of s2.
 *
 * Return s1 after the concatenation..
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{}
