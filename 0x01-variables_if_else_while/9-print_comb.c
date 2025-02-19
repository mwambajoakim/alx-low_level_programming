#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to hold number*/
	int number = 0;

	/*Loop through the numbers*/
	while (number <= 9)
	{
		putchar(number + '0');
		/*If the number is not equal to 9*/
		if (number != 9)
		{
			/*Output the number, a comma and a space*/
			putchar(',');
			putchar(' ');
		}

		/*Go up one number at a time*/
		number++;
	}
	putchar('\n');
return (0);
}
