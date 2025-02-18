#include <stdio.h>

/**
 * main- entry point fuction
 *
 * Return: 0 is success
 */

int main(void)
{
	/*Declare variable to hold char*/
	char l_alphabet = 'a';

	/*Loop through the entire alphabet*/
	while (l_alphabet <= 'z')
	{
		/*Output each character*/
		putchar(l_alphabet);
		/*Go up one character*/
		l_alphabet++;
	}
	putchar('\n');
return (0);
}
