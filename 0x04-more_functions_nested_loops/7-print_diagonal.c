#include "main.h"

/**
 *print_diagonal - funtion will print a diagonal line
 *
 *Return: nothing
 *
 */

void print_diagonal(int n)
{
int b, c;

if (n > 0)
{
for (b = 0; b < n; b++)
{
for (c = 0; c < b; c++)
{
_putchar(' ');
_putchar('\\');

if (b == n -1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
}
