#include "main.h"
#include <string.h>

/**
 *rev_string - funtion that reverses a string
 *
 *@s: the string to be tested
 *
 *Return: nothing
 *
 */

void rev_string(char *s)
{
int d;
for (d = (strlen(s) - 1; d >= 0; d--)
{
_putchar(s[d]);
}
return;
}
