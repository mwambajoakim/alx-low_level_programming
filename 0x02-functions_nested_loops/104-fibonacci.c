#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Finobacci: finobacci numbers
 * Return: return 0
 */

int main(void)
{
int inc;
unsigned long a = 0, b = 1, c;

for (inc = 0; inc < 98; inc++)
{
c = a + b;

printf("%lu", c);

a = b;
b = c;
if (inc < 98)
printf(", ");
else
printf("\n");
}
return (0);

}
