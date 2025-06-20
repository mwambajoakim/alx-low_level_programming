#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0), to the
 *  buffer pointed to by dest.
 *
 * @dest: Pointer to string.
 * @src: Pointer to string.
 *
 * Return: Pointer to a character.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}