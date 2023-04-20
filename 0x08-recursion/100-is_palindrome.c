#include "main.h"
/**
 * _strlen_recursion - print string length
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - check if string is palindrome.
 * @t: string address.
 * @g: left index.
 * @h: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *t, int g, int h)
{
	if (t[g] == t[h])
		if (g > h / 2)
			return (1);
		else
			return (pal_checker(t, g + 1, h - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if string is palindrome
 * @s: base address
 * Return: 1 if n is prime 0 if not
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
