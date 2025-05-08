#include "lists.h"

/**
 * _strlen - Counts characters in a string
 * @str: Pointer to string.
 *
 * Return: Number of characters.
 */
unsigned int _strlen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}