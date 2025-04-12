#include "variadic_functions.h"
/**
 * print_all - Prints any argument given.
 * @format: Pointer to format string.
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	char const *ptr = format;
	va_list args;

	if (format == NULL)
		printf("\n");
	return;
	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		ptr++;
	}
	printf("\n");
	va_end(args);
}
