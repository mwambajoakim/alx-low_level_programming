#include "main.h"

/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y
 * @x: the base value
 * @y: the power value
 * Return: an integer
*/

int _pow_recursion(int x, int y)
{
	/*condition for y < 0*/
	if (y < 0)
	{
	return (-1);
	}

	/*if y = 0 then return 1*/
	else if (y == 0)
	{
	return (1);
	}

	/*if it's not then get the power*/
	else
	return (x * _pow_recursion(x, y - 1));
}
