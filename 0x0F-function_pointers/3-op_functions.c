#include "3-calc.h"

/**
 * op_add - Adds a to b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ubtracts b from a.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets remainder of a divide by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: a modulo b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
