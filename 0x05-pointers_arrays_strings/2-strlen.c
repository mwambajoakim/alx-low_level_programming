#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: String to get length.
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
