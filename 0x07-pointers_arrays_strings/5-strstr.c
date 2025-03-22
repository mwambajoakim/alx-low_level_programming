#include "main.h"

/**
 * _strstr - Gets the first occurence of needle in haystack.
 *
 * @haystack: Pinter to string to look.
 * @needle: Pointer to string of occurence to look for.
 *
 * Return: Pointer to first occurence of needle in haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle == NULL)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack);
		}
	}
	return (NULL);
}
