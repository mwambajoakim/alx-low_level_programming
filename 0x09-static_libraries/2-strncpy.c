#include "main.h"

/**
 * _strncpy - Copies n bytes of src to dest.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to ource string.
 * @n: Number of bytes of src to copy.
 *
 * Return: Pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/**
	* Go through characters in src equal to n and copy
	* to dest
	*/
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	/*Pad the space after with null characters*/
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
