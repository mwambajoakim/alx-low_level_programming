#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: Character to be checked.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
