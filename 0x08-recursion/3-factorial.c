#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: the number to be checked
 * Return: the factorial
*/

int factorial(int n)
{
	/*Condtion for if n is less than 0 to return*/
	if (n < 0)
	{
	return (-1);
	}

	/*Condition for if n = 0*/
	else if (n == 0)
	{
	return (1);
	}

	/*if n > 0 then return the factorial*/
	else
	return (n * factorial(n - 1));
}
