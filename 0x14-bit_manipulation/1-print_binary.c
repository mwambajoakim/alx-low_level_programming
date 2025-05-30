#include "main.h"

/**
 * print_binary - Print binary equivalent of int
 * @n: Pointer to the integer
 */
void print_binary(unsigned long int n)
{
	int i, start = 0;
	unsigned long int mask = 1;

	for (i = sizeof(n) * CHAR_BIT - 1; i >= 0; --i)
	{
		if (n & (mask << i))
		{
			_putchar(1 + '0');
			start = 1;
		}
		else if (start)
		{
			_putchar(0 + '0');
		}
	}
	if (!start)
	{
		_putchar(0 + '0');
	}
}
