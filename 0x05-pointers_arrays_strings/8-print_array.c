#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_array - function that prints elements of an array
 *
 *@a: array to be tested
 *@n: elements of the array to be tested
 *
 *Return: nothing
 *
 */

void print_array(int *a, int n)
{
int d;
for (d = 0; d < n; d++)
{
if (d != (n - 1))
printf("%d, ", a[d]);
else
printf("%d", a[d]);
}
printf("\n");
return;
}
