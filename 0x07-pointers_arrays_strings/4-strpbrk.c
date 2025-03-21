#include "main.h"

/**
 * _strpbrk - Check for any set of bytes.
 *
 * @s: Pointer to string.
 * @accept: Pointer to string of bytes.
 *
 * Return: Pointer to first occurrence of bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	if (s != NULL)
	{
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}
