#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be checked
 * @needle: substring to be checked
 * Return: a character
*/

char *_strstr(char *haystack, char *needle)
{
	int e, r, t;

	for (e = 0; haystack[e] != '\0'; e++)
	{
		for (r = 0, t = 0; needle[r] != '\0'; r++, t++)
		{
			if (haystack[t] != needle[r] || haystack[t] == '\0')
			{
				break;
			}
		}
		if (needle[r] == '\0')
		{
			return (haystack + e);
		}
	}
	return ('\0');

}