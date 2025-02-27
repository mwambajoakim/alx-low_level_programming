#include <stdio.h>

/**
 * main - Print FizzBuzz: For multiples of 3, 'Fizz' will be
 * 		printed, multiples of 5, 'Buzz' and for both multiples 
 * 		of 5 and 3, 'FizzBuzz'.
 *
 * Return: 0 is success.
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if ((numbers % 3 == 0) && (numbers % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numbers);
		}

		if (numbers != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
return (0);
}
