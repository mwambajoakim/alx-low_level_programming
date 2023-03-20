#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 is always success
 *
 */

int main(void)
{
char z = 'z';

while (z >= 'a')
{
putchar(z);
z--;
}
putchar('n');

return (0);

}
