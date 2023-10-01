#include "main.h"

/**
 * prime_check - a function that checks if a number is prime
 * @j: value to check
 * @k: value to check
 * Return: an integer
*/

int prime_check(int j, int k)
{
	if (j < 2 || k % j == 0)
	{
	return (0);
	}
	else if (j > k / 2)
	{
	return (1);
	}
	else
	return (prime_check(j + 1, k));
}

/**
 * is_prime_number - function that checks for primacy of a number
 * @n: number to check
 * Return: an integer
*/

int is_prime_number(int n)
{
	if (n == 2)
	return (1);

	return (prime_check(2, n));
}
