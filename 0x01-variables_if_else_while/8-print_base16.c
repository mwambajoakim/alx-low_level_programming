#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare two variables for number and letters*/
	int number = 0;
	char alphabet = 'a';

	/*Loop through the numbers*/
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	/*Loop through the alphabets until f*/
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
return (0);
}
