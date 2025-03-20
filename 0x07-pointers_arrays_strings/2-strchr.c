#include "main.h"

/**
 * _strchr - Locates character c in string s.
 *
 * @s: Pointer to string.
 * @c: Character to look for.
 *
 * Return: Pointer to first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; *s != '\0'; s++, i++)
		{
			if (*s == c)
			return (s);
			else
			return (NULL);
		}
	}
	return (s);
}
