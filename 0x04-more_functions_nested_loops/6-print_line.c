#include "main.h"

/**
 * print_line - Print a line.
 *
 * @n: Number of times to print line.
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
