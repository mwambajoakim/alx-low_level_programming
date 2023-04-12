#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string where first occurrence of bytes will be located
 * @accept: bytes will be gotten from this string
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{

	char *s1 = s - 1;
	int i;

	do {
		s1++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s1 == *(accept + i))
				return (s1);
	} while (*s1 != '\0');

	return (0);
}
