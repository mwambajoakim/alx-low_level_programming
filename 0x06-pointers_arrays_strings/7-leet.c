#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @str: Pointer to string.
 *
 * Return: Pointer to the string.
 */

char *leet(char *str)
{
	int i, j;
	char leet_letters[] = {'a', 'e', 'o', 'l', 't',
	'A', 'E', 'O', 'L', 'T'};
	char leet_nums[] = {'4', '3', '0', '7', '1',
	'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_nums[j];
			}
		}

	}
	return (str);
}
