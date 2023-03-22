#include <stdio.h>

/**
 * main - prints sum of the multiples of 3 and 5
 * n: is the set parameter
 * sum: addition of the numbers
 * Program that computes and prints the sum of mutiples of 3 or 5 below 1024
 * Return: return 0
 */

int main(void)
{
int n, sum = 0;

for (n = 0; n <= 1024; n++)
if ((n % 3) == 0 || (n % 5) == 0)
{
sum += n;
}
printf("%d\n", sum);
return (0);
}
