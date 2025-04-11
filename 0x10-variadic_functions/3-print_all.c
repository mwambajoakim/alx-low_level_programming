#include "variadic_functions.h"

/**
 * print_all - Prints any argument given.
 * @format: Pointer to format string.
 */
void print_all(const char * const format, ...)
{
	char ltr;
	int num;
	float dec;
	char *str;
	char const *ptr = format;
	va_list list;

	va_start(list, format);
	while (*ptr)
	{
		switch(*ptr)
		{
			case 'c':
				ltr = va_arg(format, int);
				printf("%c", ltr);
				break;
		}
	}
	printf("\n");
	va_end(format);
}
