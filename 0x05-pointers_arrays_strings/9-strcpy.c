#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

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
