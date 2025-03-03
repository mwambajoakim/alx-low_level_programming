#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to string.
 *
 * Return: Length of the string s.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * rev_string - Reverses a string pointed to by s.
 *
 * @s: Pointer to a string.
 */

void rev_string(char *s)
{
	char *new = s;
	char *final, temp;

	final = s + _strlen(s) - 1;

	while (new < final)
	{
		temp = *new;
		*new = *final;
		*final = temp;

		new++;
		final--;
	}
}
