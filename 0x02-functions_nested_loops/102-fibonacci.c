#include <stdio.h>

/**
 * main -prints Fibonacci sequence is generated
 * By adding the previous two terms
 * Return: return value is 0
 */

int main(void)
{
int inc;

unsigned long int a = 0, b = 1, c;

for (inc = 0; inc <= 50; inc++)
{
c = a + b;
printf("%lu", c);

a = b;
b = c;

if (inc < 50)
printf(", ");
else
printf("\n");
}
return (0);

}
