#include <stdio.h>

/**
 * main - Entry point function.
 *
 * Return: 0 is success.
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = 0;
	long int sum = 0;

	while (c < 50)
	{
		if (c == 0)
			printf("%ld, ", a);
		else if (c == 1)
			printf("%ld, ", b);
		else
		{
			sum = a + b;
			if (c == 50 - 1)
				printf("%ld", sum);
			else
				printf("%ld, ", sum);
			a = b;
			b = sum;
		}
		c++;
	}
	printf("\n");
	return (0);
}
