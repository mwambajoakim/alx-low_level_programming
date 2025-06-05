#include "ops.h"

/**
 * mod - Computes the modulus of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of a divided by b.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(EXIT_FAILURE);
	}
	return (a % b);
}
