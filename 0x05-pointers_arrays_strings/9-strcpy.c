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

char *strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] <= '\0'; j++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
