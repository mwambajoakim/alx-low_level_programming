#include "main.h"

/**
 * len_recursion - a function that checks for length of string
 * @s: string to check
 * Return: string length
*/

int len_recursion(char *s)
{
	if (s[0] == '\0')
	return (0);

	else
	return (1 + len_recursion(s + 1));
}

/**
 * palindrome_check - a function that checks if a string is a palindrome
 * @s: string to check
 * @y: left value check
 * @z: right value check
 * Return: 1 if s is a palindrome
*/

int palindrome_check(char *s, int y, int z)
{
	if (s[y] == s[z])
	if (y > z / 2)
		return (1);
		else
			return (pal_checker(s, y + 1, z - 1));
	else
		return (0);
}

/**
 * is_palindrome - a function that checks if string is a palindrome
 * @s: string to check
 * Return: 1 if s is palindrome, 0 if otherwise
*/

int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, len_recursion(s) - 1));
}
