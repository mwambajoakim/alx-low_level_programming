#include "variadic_functions.h"

/**
 * print_strings - Prints variable number of strings.
 * @separator: Pointer to string of separators.
 * @n: Number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			str = "nil";
		}
		else if (str == '\0')
		{
			str == "(empty)";
		}
		printf("%s", str);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
