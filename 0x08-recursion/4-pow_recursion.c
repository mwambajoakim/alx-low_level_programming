#include "main.h"

/**
 * _pow_recursion - a function that will print x to power y
 * @x: integer to be tested
 * @y: power to be tested
 * Return: 0 is successful
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (0);
	}
	else if (y < 0)
	{
	return (-1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
	}
