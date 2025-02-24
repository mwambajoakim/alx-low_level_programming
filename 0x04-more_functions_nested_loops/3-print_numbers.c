#include "main.h"

/**
 * print_numbers - Print numbers, 0  to 9.
 *
 * Return: Nothing.
 */

void print_number(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
