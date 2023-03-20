#include <stdio.h>

/**
 *main  - entry point
 *
 *Return: 0 is always success
 *
 */

int main(void)
{
int j, k, l, m;

for (j = 0; j < 1000; j++)
{
k = j / 100;
l = (j / 10) % 10;
m = j % 10;

if (k < l && l < m)
{
putchar(k + '0');
putchar(l + '0');
putchar(m + '0');

if (j < 800)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
