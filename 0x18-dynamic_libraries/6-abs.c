#include "main.h"

/**
 * _abs - Computes absolute value of integer.
 *
 * @number: integer to return absolute value.
 *
 * Return: absolute value.
 */

int _abs(int number)
{
	/*If less than zero multiply by -1 return abs-value*/
	if (number < 0)
	{
		number *= -1;
		return (number);
	}
	/*Return number otherwise*/
	return (number);
}
