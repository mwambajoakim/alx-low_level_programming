#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - Prints half of a string, then a new line.
 *
 * @str: Pointer to the string.
 */

void puts_half(char *str)
{
	int i, half;
	int length = _strlen(str);

	half = (length + 1) / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
