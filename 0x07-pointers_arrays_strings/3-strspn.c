#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: prefix substring
 *@accept: suffix substring
 *Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
int k = 0, m, n;
for (m = 0; s[m] != '\0'; m++)
{
if (s[m] != 32)
{
	for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[m] == accept[n])
			a++;
		}
}
else
	return (a);
}
return (a);

}
