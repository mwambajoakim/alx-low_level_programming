#include "main.h"

/**
 * print_triangle - Prints a triagle of size 'size'.
 * @size: Size of the triangle.
 */

void print_size(int size)
{
	int space, start;

	for (space = 0; space < size; space++)
	{
		for (start = 0; start < size; start++)
		{
			_putchar(" ");
		}
		_putchar("#");
		_putchar('\n');
	}
}
