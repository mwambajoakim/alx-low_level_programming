#include "main.h"

/**
 *times_table - function that prints 9 times table, starting with 0
 *
 */

void times_table(void)
{
int n, m, prod;

for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
prod = m * n;
}
if (prod <= 9)
{
_putchar(prod + '0');
}
else
{
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
}
_putchar('\n');
}
}
