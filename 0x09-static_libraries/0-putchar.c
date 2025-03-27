#include <unistd.h>

/**
 * _putchar - Prints a character to stdout.
 *
 * @c: Character to print.
 *
 * Return: 1 is success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
