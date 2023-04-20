#include "main.h"

/**
 * check - square root
 * @p:int
 * @q:int
 * Return: integer
 */
int check(int p, int q)
{
	if (p * p == q)
		return (p);
	if (p * p > q)
		return (-1);
	return (check(p + 1, q));
}

/**
 * _sqrt_recursion - A function that gives square root
 * @n: integer to check
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
