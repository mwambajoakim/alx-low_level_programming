#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to y
 *
 * @x: Base number
 * @y: Power
 *
 * Return: power as int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
