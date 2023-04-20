#include "main.h"

/**
 * check - check for prime number
 * @k:int
 * @d:int
 * Return: bool
 */
int check(int k, int d)
{
	if (d < 2 || d % k == 0)
		return (0);
	else if (k > d / 2)
		return (1);
	else
		return (check(k + 1, d));
}

/**
 * is_prime_number - A function to check if a number is prime
 * @n:integer to be checked
 * Return:integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
