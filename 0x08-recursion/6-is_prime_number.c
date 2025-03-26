#include "main.h"
/**
 * prime_check - Checks if a number is prime.
 *
 * @n: Number to check.
 *
 * Return: 1 if prime 0 otherwise.
 */

int prime_check(int n)
{
	if (n <= 1 || n % 2 == 0
	|| n % 5 == 0)
	{
		return (0);
	}
	if (n == 2 || n == 3 || n == 5
	|| n % 10 == 1 || n % 10 == 3
	|| n % 10 == 7 || n % 10 == 9)
	{
		return (1);
	}
	return (n - prime_check(n));
}

/**
 * is_prime_number - Checks if n is a prime number.
 *
 * @n: Number to check.
 *
 * Return: 1 if prime 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n > 5)
	{
		return (prime_check(n));
	}
	return (0);
}
