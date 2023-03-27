#include "main.h"

/**
 *_puts - Function that prints a string
 *
 *@str: String to be tested
 *
 *Return: nothing
 *
 */

void _puts(char *str)
{
int k;
for (k = 0; str[k] != '\0'; k++)
{
_putchar(str[k]);
}
_putchar('\n');
return;
}
