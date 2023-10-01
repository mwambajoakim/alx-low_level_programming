#include "main.h"

/**
 * _strlen_recursion - a funcrion that prints the length of a string
 * @s: the string to be tested
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	/*A condition for the function to return 0 if the string is empty*/
	if (*s == '\0')
	{
	return (0);
	}
	/**
	 * If not empty it returns 1 plus the next character's address
	 * after the function has checked there is another charcater
	*/
	else
	return (1 + _strlen_recursion(s + 1));
}
