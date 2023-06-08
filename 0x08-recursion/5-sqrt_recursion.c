#include "main.h"

/**
 * sqrt_check - a function thaat checks if a number is a square root
 * @j: the square root value
 * @k: the square value
 * Return: an integer
*/

int sqrt_check(int j, int k)
{
	if (j * j == k)
	{
	return (j);
	}

	if (j * j > k)
	{
	return (-1);
	}
	return (sqrt_check(j + 1, k));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: the value to be checked
 * Return: an integer
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);

	return (sqrt_check(1, n));
}
