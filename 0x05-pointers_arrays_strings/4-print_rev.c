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
 * print_rev - Prints a string pointed to by s in reverse.
 *
 * @s: Pointer to string.
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
