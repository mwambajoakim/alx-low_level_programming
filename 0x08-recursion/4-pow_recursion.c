#include "main.h"

/**
 * _pow_recursion - Calculates number x raised to y.
 *
 * @x: Base number.
 * @y: Power number.
 *
 * Return: Result of x to power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
