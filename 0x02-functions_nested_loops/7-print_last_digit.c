#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @number: integer to print last number
 *
 * Return: Last number
 */

int print_last_digit(int number)
{
	int last_digit;

	if (number < 0)
	{
		last_digit = number % 10;
		last_digit *= -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = number % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
