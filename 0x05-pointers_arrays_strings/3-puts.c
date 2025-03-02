#include "main.h"

/**
 * _puts - Prints a string pointed to by s to stdout.
 *
 * @s: Pointer to string to print.
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
