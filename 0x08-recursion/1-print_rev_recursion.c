#include "main.h"

/**
 * _puts_recursion - Prints string s.
 *
 * @s: Pointer to string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * _print_rev_recursion - Prints string s in reverse.
 *
 * @s: Pointer to string.
 */

void _print_rev_recursion(char *s)
{

}
