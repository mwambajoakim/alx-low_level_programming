#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: pointer to string of separators
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;


	if (separator != NULL)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%s", va_arg(str, char *));
			else
				printf("%s%s", va_arg(str, char *), separator);
		}
		va_end(str);
		printf("\n");
	}

	else
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(str, char *));
		}
		va_end(str);
		printf("\n");
	}
}
