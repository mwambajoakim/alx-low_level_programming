#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>

/**
 * is_number - Checks if string str has a number.
 *
 * @str: Pointer to string.
 *
 * Return: 0 if not number , 1 otherwise.
 */

int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

#endif /*MAIN_H*/
