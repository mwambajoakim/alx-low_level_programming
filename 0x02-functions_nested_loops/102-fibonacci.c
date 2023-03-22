#include <stdio.h>

/**
 * main -prints Fibonacci sequence is generated
 * By adding the previous two terms
 * Return: return value is 0
 */

int main(void)
int main(void)
{
int count;
unsigned long j = 0, k = 1, sum;

for (count = 0; count < 50; count++)
{
sum = j + k;
printf("%lu", sum);

j = k;
k = sum;

if (count == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
