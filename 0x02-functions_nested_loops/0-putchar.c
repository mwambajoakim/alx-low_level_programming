#include <unistd.h>

/**
 * _putchar -entry point function
 *
 * @h: character to stdout
 * Return: 1 is success
 */

int _putchar(char h)
{
return (write(1, &h, 1));
}

/**
 * main -entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
return (0);
}
