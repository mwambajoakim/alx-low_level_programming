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
	number = _abs(number);                                                  
return (number % 10);
}
