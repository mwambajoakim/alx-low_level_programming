#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: pointer to string to print between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));
		if (k < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
