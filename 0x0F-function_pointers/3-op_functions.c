#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that adds integers
 * @a: integer to add
 * @b: integer to add
 * Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers
 * @a: integer to subtract
 * @b: integer to subtract
 * Return: difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers
 * @a: integer to divide
 * @b: integer to divide
 * Return: division of a and b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that gets the modulus of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: modulus
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
