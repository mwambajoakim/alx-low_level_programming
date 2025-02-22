#include "main.h"

/**
 * largest_number - Prints the largest number of three.
 *
 * @a: First number.
 * @b: Second number.
 * @c: Third number.
 *
 * Return: Largest number.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
