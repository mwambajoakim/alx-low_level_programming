#include "main.h"

/**
 * _islower - checks if alphabet is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	/*Check if it lowercase and return 1*/
	if (c >= 'a' && c <= 'z')
		return (1);
	/*Otherwise return 0*/
	else
		return (0);
}
