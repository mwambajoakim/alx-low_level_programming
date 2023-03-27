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
int len = strlen(a);
for (n = 0; n <= len; n++)
{
printf("%d\n", a[n]);
}
return;
}
