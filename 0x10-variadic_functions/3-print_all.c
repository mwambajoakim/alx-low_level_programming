#include "variadic_functions.h"

/**
 * _strlen - Finds the length of a string.
 * @str: Pointer to string.
 *
 * Return: tring length.
 */
int _strlen(char *str)
{
	int i, len = o;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * print_all - Prints any argument given.
 * @format: Pointer to format string.
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	unsigned int i, len;
	va_list list;

	if (format == NULL)
		return;

	len = _strlen(format);
	i = 0;
	va_start(list, len);
	while (i < len)
	{
		c = va_args(format, char);
		printf("%c", c);
		i = va_args(format, int);
		printf("%d", i);
		f = va_args(format, float);
		printf("%f", f);
		s = va_arg(format, char *);
		printf("%s", s);
		i++;
	}
	printf("\n");
	va_end(format);
}
