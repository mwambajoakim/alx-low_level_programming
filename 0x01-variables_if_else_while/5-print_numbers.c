#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to  hold first digit*/
	int number = 0;

	/*Loop through the numbers*/
	while (number <= 9)
	{
		/*Output each number*/
		printf("%d", number);
		/*Go up one number*/
		number++;
	}
	printf("\n");
return (0);
}
