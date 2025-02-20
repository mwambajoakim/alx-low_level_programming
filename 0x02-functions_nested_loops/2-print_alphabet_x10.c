#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	/*Define two variables*/
	int table;
	char l_alphabet;

	/*Create a table to print the alphabets*/
	for (table = 1; table <= 9; table++)
	{
		/*Loop through the alphabet*/
		for (l_alphabet = 'a'; l_alphabet <= 'z'; l_alphabet++)
		{
			/*Print characters to stdout*/
			_putchar(l_alphabet);
		}
	}
	_putchar('\n');
}
