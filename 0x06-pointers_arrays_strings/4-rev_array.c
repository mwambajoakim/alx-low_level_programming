#include "main.h"

/**
 * reverse_array - Reverses the elements of an array.
 *
 * @a: Pointer to an array.
 * @n: Number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
