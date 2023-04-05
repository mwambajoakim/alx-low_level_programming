#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	int j;
for (j = 0; s[j]; j++)
	{
		_putchar(s[j]);
	}

}
