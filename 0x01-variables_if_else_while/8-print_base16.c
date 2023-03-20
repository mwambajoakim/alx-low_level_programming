#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 is always success
 *
 */

int main(void)
{
char c;
int k;

for (k = 0; k < 10; k++)
{
putchar(k + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
