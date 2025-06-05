#include "ops.h"

/**
 * divide - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The quotient of a and b.
 */
int divide(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(EXIT_FAILURE);
	}
	return (a / b);
}
