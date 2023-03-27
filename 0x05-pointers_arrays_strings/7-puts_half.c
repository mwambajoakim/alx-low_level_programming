#include "main.h"
#include <string.h>

/**
 *puts_half - function that will print half of a string
 *
 *@str: string to be tested
 *
 *Return: nothing
 *
 */
void puts_half(char *str)
{
int d;
int len = strlen(str);
for (d = (len + 1) / 2; d < len; d++)
{
_putchar(str[d]);
}
_putchar('\n');
return;
}
