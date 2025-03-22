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

	if (needle == NULL)
	{
		return (haystack);
	}
	if (haystack != NULL)
	{
		while (*haystack != '\0')
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack++;
		}
	}
	return (NULL);
}
