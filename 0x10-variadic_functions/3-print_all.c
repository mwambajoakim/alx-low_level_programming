#include "variadic_functions.h"

/**
 * print_all - Prints any argument given.
 * @format: Pointer to format string.
 */
void print_all(const char * const format, ...)
{
	char ltr, *str;
	int num;
	float dec;
	char const *ptr = format;
	const char *separator = "";
	va_list args;

	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				ltr = va_arg(args, int);
				printf("%s%c", separator, ltr);
				separator = ", ";
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				separator = ", ";
				break;
			case 'f':
				dec = va_arg(args, double);
				printf("%s%f", separator, dec);
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "nil";
				printf("%s%s", separator, str);
				separator = ", ";
				break;
		}
		ptr++;
	}
	printf("\n");
	va_end(args);
}
