#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to hold first number*/
	int number = 0;

	/*Loop through the numbers*/
	while (number <= 9)
	{
		/*Output each number*/
		putchar(number + '0');
		/*Go down one number until the end*/
		number++;
	}
	putchar('\n');
return (0);
}
