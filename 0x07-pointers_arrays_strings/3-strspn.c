#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to main string.
 * @accept: Pointer to prefix substring.
 *
 * Return:  Length of prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
		s++;
	}
	return (count);
}
