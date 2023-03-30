#include "main.h"

/**
 * reverse_array - function that reverses the content of array of integers
 * @a: array of integers
 * @n: number of elements of the array to be reverse
 */

void reverse_array(int *a, int n)
{
int i, h;

for (i = 0; i < n; i--)
{
h = a[i];
a[i] = a[(n - i) - 1];
a[(n - i) - 1] = h;
}
}
