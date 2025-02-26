#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @size: Dimesndions of the square.
 *
 * Return: Nothing.
 */

void print_square(int size)
{
	int space, start;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space < size; space++)
		{
			for (start = 0; start < size; start++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
