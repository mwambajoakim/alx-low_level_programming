#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to hold character*/
	char l_alphabet = 'a';

	/*Loop through alphabet*/
	while (l_alphabet <= 'z')
	{
		/*Exclude 'q' and 'e'*/
		if (l_alphabet != 'e' && l_alphabet != 'q')
		{
			/*Output each character*/
			putchar(l_alphabet);
		}
		/*Go up ome character until end*/
		l_alphabet++;
	}
	putchar('\n');
return (0);
}
