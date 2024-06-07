#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *
 *@s: pointer to string
 *
 *Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		return (1 + _strlen_recursion(s + 1));
}

