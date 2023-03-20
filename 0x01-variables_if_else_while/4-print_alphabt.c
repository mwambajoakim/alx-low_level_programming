#include <stdio.h>

/**
 *main - entry point
 *
 *Return: always return 0
 *
 */

int main(void)
{
char a;
a = 'a';

while (a <= 'z')
{
if (a != 'q' && a != 'e')
putchar(a);
a++;
}
putchar("\n");

return (0);
}
