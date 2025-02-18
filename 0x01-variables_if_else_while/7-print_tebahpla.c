#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to hold last alphabet*/
	char lalphbackward = 'z';

	/*Loop through backwards*/
	while (lalphbackward >= 'a')
	{
		putchar(lalphbackward);
	/*Go down one character*/
	lalphbackward--;
	}
	putchar('\n');
return (0);
}
