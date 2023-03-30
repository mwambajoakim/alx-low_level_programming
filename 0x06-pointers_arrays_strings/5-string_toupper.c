include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase of a sting to uppercase
 * @s: string to be reversed
 * Return: return value s
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}
