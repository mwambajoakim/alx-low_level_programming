#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

a = 'A';
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
