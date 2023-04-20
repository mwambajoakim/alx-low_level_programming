#include <variadic_functions.h>
#include <stdarg.h>

/**
 * sum_them_all - function that will sum its arguments
 * @n: arguments to be summed
 * Return: an integer
*/

int sum_them_all(const unsigned int n, ...)
{
	int d, result = 0;

	va_list args;

	va_start(args, n);

	for (d = 0; d < n; d++)
	{
	result += va_arg(args, n);
	if (n == 0)
	{
	return (0);
	}
	}
	va_end;
	return (result);
}
