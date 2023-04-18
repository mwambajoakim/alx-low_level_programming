#include "main.h"

/**
 * factorial - a function that will print the factorial of a given number
 * @n: number to be tested
 * Return: 0 is success
*/

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}

	else if (n < 0)
	{
	return (-1);
	}

	else
	{
	return (n * factorial(n - 1));
	}
}
