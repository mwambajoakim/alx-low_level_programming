#include "main.h"
#include <string.h>

/**
 *puts2 - function that prints characters of a string
 *
 *@str: string to be checked
 *
 *Return: nothing
 *
 */

void puts2(char *str)
{
int d;
int len = strlen(str) - 1;

for (d = 0; d <= len; d++)
{
if (d % 2 == 0)
_putchar(str[d]);
}
_putchar('\n');
return;
}
