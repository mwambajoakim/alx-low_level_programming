#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string where first occurrence of bytes will be located
 * @accept: bytes will be gotten from this string
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
int g;

	while (*s)
		{
		for (g = 0; accept[g]; g++)
			if (accept[g] == *s)

				return (s);
		}
		s++

return (NULL);
}