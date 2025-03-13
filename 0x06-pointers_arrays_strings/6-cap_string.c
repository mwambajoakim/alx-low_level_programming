#include "main.h"

/**
 * cap_string - Capitalizes every first letter
 * of a word.
 *
 * @str: Pointer to string.
 *
 * Return: Pointer to the string.
 */

char *cap_string(char *str)
{
	int i;
	char mark[] = {' ', '\t', '\n', 
		',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == mark[i])
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}
