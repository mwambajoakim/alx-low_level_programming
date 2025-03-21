#include "main.h"

/**
 * _strlen - Counts characters in a string.
 *
 * @str: Pointer to a string.
 *
 * Return: Length of string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
return (len);
}

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to main string.
 * @accept: Pointer to prefix substring.
 *
 * Return:  Length of prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{}
