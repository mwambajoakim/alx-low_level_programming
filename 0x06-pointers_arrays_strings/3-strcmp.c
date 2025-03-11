#include "main.h"

/**
 * _strcmp - Compares strings s1 and s2.
 *
 * @s1: Pointer to string 1.
 * @s2: Pointer to string 2.
 *
 * Return: Difference between s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
