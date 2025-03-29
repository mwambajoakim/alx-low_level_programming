#include "main.h"

/**
 * _strlen - Checks for length of a string.
 *
 * @str: Pointer to string.
 *
 * Return: Length of string str.
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * _strdup - Points to a newly allocated space in memory
 * containing the string that is a duplicate of str.
 *
 * @str: Pointer to string.
 *
 * Return: Pointer to string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(char) * length);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
