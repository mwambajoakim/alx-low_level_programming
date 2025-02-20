#include <unistd.h>

/**
 * _putchar - function that prints to stdout
 *
 * @ch: character to print to stdout
 *
 * Return: 1 is success
 */

int _putchar(char ch)
{
return (write(1, &ch, 1));
}
