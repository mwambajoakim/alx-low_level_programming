#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 *
 * @n: parameter
 * m: is an integer
 * k: is the second integer
 * mult: is the multiplication of the two integers
 */

void print_times_table(int n)
{
int m, k, mult;

if (n <= 15 && n >= 0)
{

for (m = 0; m <= n; m++)
{
_putchar('0');
for (k = 1; k <= n; k++)
{
_putchar(',');
_putchar(' ');
mult = m * k;
if (mult <= 99)
_putchar(' ');
if (mult <= 9)
{
_putchar(mult + '0');
}
else if (mult <= 99 && mult > 10)
{
_putchar(mult + '0');
_putchar((mult % 10) + '0');
}
else if (mult >= 100)
{
_putchar(mult + '0');
_putchar((mult / 10) % 10 + '0');
_putchar((mult % 10) + '0');
}
}
_putchar('\n');
}

}
}
