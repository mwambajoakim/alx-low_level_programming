#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times.
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int rows_10;
	int numbers;

	for (rows_10 = 0; rows_10 <= 9; rows_10++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar(numbers / 10 + '0');
			}
			_putchar(numbers % 10 + '0');
		}
		_putchar('\n');
	}
}
