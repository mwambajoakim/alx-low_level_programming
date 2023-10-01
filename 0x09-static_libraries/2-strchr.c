#include "main.h"


/**
 *_strchr - function that locates a character in a string
 *@s: string to be checked
 *@c: character to be checked
 *Return: pointer to occerence of character
 */

char *_strchr(char *s, char c)
	{
	while (*s)		/*while we are inside string s, we start checking below*/
	{
		if (*s != c)		/*if c is not found in s as a first occurrence,*/
			s++;			/*we increment to keep looking*/
		else				/*if c is found, we return it in s*/
			return (s);

	}
	if (c == '\0')			/*if c is found as the end character, we return NULL*/
		return (s);

	return ('\0');
	}