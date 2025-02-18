#include <stdio.h>

/**
 * main - entry point function
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare two variables for the characters*/
	char l_alphabet = 'a';
	char u_alphabet = 'A';

	/*Loop through lowercase alphabet*/
	while (l_alphabet <= 'z')
	{
		/*Output each character*/
		putchar(l_alphabet);
		/*Go up a character until end*/
		l_alphabet++;
	}

	/*Loop through lowercase alphabet*/
	while (u_alphabet <= 'Z')
	{
		/*Output each character*/
		putchar(u_alphabet);
		/*Go up a character until end*/
		u_alphabet++;
	}
	putchar('\n');
return (0);
}
