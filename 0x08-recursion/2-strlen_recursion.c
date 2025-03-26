#include "main.h"

/**
 * _strlen_recursion - Returns length of string recursively.
 *
 * @s: Pointer to the string.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1)
}
