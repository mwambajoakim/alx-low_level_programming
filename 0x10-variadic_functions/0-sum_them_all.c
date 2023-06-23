#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns
 * sum of all its parameters
 * @n: the first argument
 * Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	i = 0;

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
