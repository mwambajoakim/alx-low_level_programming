#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 * Return: nothing
*/

void _puts_recursion(char *s)
{
  if (*s)
  {
_putchar(*s);
_puts_rrecursion(s +1);
  }
_putchar('\n');

return;
}
