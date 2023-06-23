#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: separator inside string
 * @n: number of characters in string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *string;
	va_list ap;

	if (separator == NULL)
	{
	separator = "";
	}

	for (k = 0; k < n; k++)
	{
		string = va_arg(ap, char*);

		if (string == NULL)
		string = "(nil)";

		printf("%s", string);
		if (k < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
