#include "main.h"

/**
 * print_diagonal - Prints a diagonal line.
 *
 * @n: Number of times to print.
 *
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	/*pace is for rows and start for columns*/
	int space, start;

	/*When n is 0 or negative just put a new line*/
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space < n; space++)
		{
			for (start = 0; start < space; start++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
