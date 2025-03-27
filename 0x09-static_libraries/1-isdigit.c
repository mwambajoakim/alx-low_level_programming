#include "main.h"

/**
 * _isdigit - Checks for numeric character (0 - 9).
 *
 * @c: Character to check.
 *
 * Return: 1 is numeral, 0 is otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
