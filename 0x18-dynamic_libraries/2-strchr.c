#include "main.h"

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
