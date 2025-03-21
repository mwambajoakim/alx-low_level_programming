#include "main.h"

/**
 * _strlen - Counts characters in a string.
 *
 * @str: Pointer to string.
 *
 * Return: Length of string.
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; *str != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strchr - Locates character c in s.
 *
 * @s: Pointer to string.
 * @c: Character to look for.
 *
 * Return: Pointer to first occurence of character.
 */

char *_strchr(char *s, char c)
{
	int i;
	int len = _strlen(s) + 1;

	if (s == NULL)
	{
		return (NULL);
	}

	if (s != NULL)
	{
		for (i = 0; i < len; s++, i++)
		{
			if (*s == c)
			{
				return (s);
			}
		}
	}
return (NULL);
}
