#include "main.h"

/**
 * check - square root
 * @p:int
 * @q:int
 * Return: int
 */
int sqrt(int p, int q)
{
	if (p * p == q)
		return (p);
	if (p * p > q)
		return (-1);
	return (sqrt(p + 1, q));
}

/**
 * _sqrt_recursion - return sq root
 * @n: int
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt(1, n));
}
