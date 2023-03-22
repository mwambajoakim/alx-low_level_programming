#include "main.h"

/**
 *print_alphabet - function to print abc
 *
 *Return: Always 0
 *
 */

void print_alphabet(void)
{
char a;

while (a <= 'z')
{
_putchar(a);
a++;
_putchar('\n');
}
return (0);
}
