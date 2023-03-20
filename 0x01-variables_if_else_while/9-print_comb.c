#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 (Success)
 *
 */

int main(void)
{
int d;

for(d = 1; d < 10; d++)
{
putchar(d + '0');
if (d < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
 
return (0);
}
