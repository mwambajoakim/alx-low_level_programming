#include "main.h"

/**
 * print_triangle - Prints a triagle of size 'size'.
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int space, start;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (space = 1; space <= size; space++)
	{
		for (start = 1; start <= size; start++)
		{
			if (start <= size - space)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
