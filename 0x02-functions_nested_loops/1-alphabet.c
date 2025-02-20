#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char l_alphabet;

	for (l_alphabet = 'a'; l_alphabet <= 'z'; l_alphabet++)
	{
		_putchar(l_alphabet);
	}
	_putchar('\n');
return;
}
