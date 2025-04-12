#include "variadic_functions.h"
/**
 * print_all - Prints any argument given.
 * @format: Pointer to format string.
 */
void print_all(const char * const format, ...)
{
	char ltr, *str, *sep = "";
	int num;
	float dec;
	char const *ptr = format;
	va_list args;

	if (format == NULL)
		printf("\n");
	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				ltr = va_arg(args, int);
				printf("%s%c", sep, ltr);
				sep = ", ";
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", sep, num);
				sep = ", ";
				break;
			case 'f':
				dec = va_arg(args, double);
				printf("%s%f", sep, dec);
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
