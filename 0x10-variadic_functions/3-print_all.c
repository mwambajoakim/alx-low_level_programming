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
	char *separator = {", "};
	va_list args;

	va_start(args, format);
	while (*ptr)
	{
		if (*ptr != '\0')
		{
			switch(*ptr)
			{
				case 'c':
					ltr = va_arg(args, int);
					printf("%c", ltr);
					break;
				case 'i':
					num = va_arg(args, int);
					printf("%d", num);
					break;
				case 'f':
					dec = va_arg(args, double);
					printf("%f", dec);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "nil";
					printf("%s", str);
					break;
			}
		}
	}
	printf("\n");
	va_end(args);
}
