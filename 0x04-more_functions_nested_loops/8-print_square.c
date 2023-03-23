#include "main.h"

/**
 *print_square - function tha prints a square
 *@size: character to be tested
 *Return: nothing
 *
 */

void print_square(int size)
{
if (size > 0)

int nl;
for (nl = 0; nl < size; nl++)
{
for (wd = 0; wd < nl; wd++)
{
_putchar('#');

if (nl == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n')
}
