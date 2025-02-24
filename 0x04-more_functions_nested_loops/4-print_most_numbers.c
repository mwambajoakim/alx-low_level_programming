#include "main.h"

/**
 * print_most_numbers - Print numbers except 2 and 4.
 *
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers + '0');
		}
	}
	_putchar('\n');
}
