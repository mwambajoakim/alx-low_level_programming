#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to string.
 * @src: Pointer to string.
 *
 * Return: Pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);

}
