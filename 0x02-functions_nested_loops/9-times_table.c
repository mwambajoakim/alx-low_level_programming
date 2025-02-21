#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: Nothing
 */

void times_table(void)
{
	int first, second, mult = 0;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			mult = first * second;
			if (second == 9)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}

			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
