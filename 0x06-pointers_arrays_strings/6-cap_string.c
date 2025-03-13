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
	int i, j, caps = 1;
	char mark[] = {' ', '\t', '\n',
		',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; mark[j] != '\0'; j++)
		{
			if (str[i] == mark[j])
			{
				caps = 1;
				break;
			}
		}
		if (caps && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			caps = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			caps = 0;
		}
	}
	return (str);
}
