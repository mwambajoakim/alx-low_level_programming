#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: Pointer to separator used.
 * @n: Number of arguments to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(numbers, int));
		}
		else
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}
	}
	printf("\n");
}
