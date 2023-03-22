#include <stdio.h>

/**
 * main -prints Fibonacci sequence is generated
 * By adding the previous two terms
 * Return: return value is 0
 */

int main(void)
{
unsigned long a = 0, b = 1, sum;
float tot_sum;

while (1)
{
sum = a + b;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
tot_sum += sum;

a = b;
b = sum;
}
printf("%.0f\n", tot_sum);

return (0);
}
