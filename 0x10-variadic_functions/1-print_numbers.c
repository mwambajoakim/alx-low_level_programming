#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: pointer to string to print between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;

	va_start(ap, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));
		if (k < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
