#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: pointer to string of separators
 * @n: number of integers passed to function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(nums, n);
			for (i = 0; i < n; i++)
			{
				if (i == n - 1)
					printf("%d", va_arg(nums, int));
				else
					printf("%d%s", va_arg(nums, int), separator);
			}
		va_end(nums);
		printf("\n");
	}

	else
		va_start(nums, n);
	{
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
}
