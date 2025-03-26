#include "main.h"

/**
 * sqrt_guess - Guess the square root of a perfect square.
 *
 * @n: Number to be checked.
 * @guess: Random guess.
 *
 * Return: Correct guess.
 */

int sqrt_guess(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}

	if (guess * guess > n)
	{
		return (-1)
	}

	if (guess * guess == n)
	{
		return (guess);
	}

	return (_sqrt_guess(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculates the sqyare root of n.
 *
 * @n: Number to calculate square root.
 *
 * Return quare root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (1);
	}

	return (sqrt_guess(n, 1));
}
