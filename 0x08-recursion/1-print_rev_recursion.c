#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in reverse
 * @s: string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_putchar(s + 1);
	_putchar(*s);
	}
}
