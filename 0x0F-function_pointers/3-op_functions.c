#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition operation
  * @a: int
  * @b: int
  *
  * Return: Sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtract two integers
* @a: first integer
* @b: second integer
*
* Return: Difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two integers
* @a: first integer
* @b: second integer
*
* Return: multiple
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide two integers
* @a: first int
* @b: second ivt
* Return: quotient
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
* op_mod -  returns the remainder of the
* division of a by b
* @a: 1st int
* @b: 2nd int
*
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
