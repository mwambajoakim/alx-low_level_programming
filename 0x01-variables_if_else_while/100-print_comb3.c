#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 is always success
 *
 */

int main(void)
{
int f, l;
for (f = 30; f <= 39; f++)
{
for (l = 30; l <= 39; l++)
{
if ((f % 10) < (l % 10))
{
putchar((f % 10) + '0');
putchar((l % 10) + '0');
if (f != 38 || l != 39)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
