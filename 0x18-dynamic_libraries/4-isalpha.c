#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to check
 *
 * Return: 1 if it exists 0 if otherwise
 */

int _isalpha(int c)
{
	/*If alphabet exists return 1*/
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	/*Return 0 if otherwise*/
	else
		return (0);
}
