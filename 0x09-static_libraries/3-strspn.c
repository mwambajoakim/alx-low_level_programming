#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: prefix substring
 *@accept: suffix substring
 *Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0, j, k;

for (j = 0; s[j] != '\0' && j == length; j++)
	for (k = 0; accept[k] != '\0'; k++)
		if (s[j] == accept[k])
		length++;

return (length);
}
