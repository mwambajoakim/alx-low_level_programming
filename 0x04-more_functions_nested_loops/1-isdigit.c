#include "main.h"

/**
 *_isdigit - function that checks for a digit
 *
 *Return: 1 if there is a digit
 *Return: 0 if there is no digit
 *
 */

int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
return (1);
else
return (0);
}
