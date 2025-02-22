#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers to 98.
 *
 * @n: Starting number.
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
	int end = 98;

	if (n == end)
	{
		printf("%d", end);
	}

	else
	{
		while (end < n)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}

			else
			{
				printf("%d", n);
			}
			n--;
		}

		while (n <= end)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}

			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	printf("\n");
}
