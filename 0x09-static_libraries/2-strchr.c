#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string to be checked
 *@c: character to be checked
 *Return: pointer to occerence of character
 */

char *_strchr(char *s, char c)
	{
char *s1 = s - 1;

do {

	s1++;
	if (*s1 == c)
	return (s1);
} while (*s1 != '\0');
return (0);
	}
