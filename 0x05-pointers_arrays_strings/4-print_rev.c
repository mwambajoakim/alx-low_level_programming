#include "main.h"
#include <string.h>

/**
 *print_rev - function that prints a string in reverse
 *
 *@s: string to be tested
 *
 *Return: nothing
 *
 */

void print_rev(char *s)
{
int d;
int len = strlen(s);
for (d = len - 1; d >= 0; d--)
{
_putchar(s[d]);
}
_putchar('\n');
return;
}
