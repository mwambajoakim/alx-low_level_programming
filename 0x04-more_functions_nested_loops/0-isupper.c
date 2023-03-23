#include "main.h"

/**
 *_isupper - funtion that checks for uppercase characters
 *@c: the character tested
 *Return: 1 if uppercase
 *Return: 0 if not
 *
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
