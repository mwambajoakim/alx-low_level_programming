#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte
 *
 *@s: buffer
 *@b: contains constant byte
 *@n: number of bytes to use
 *
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n);
{

for (; n; n--)
s[n - 1] = b;
return (s);
}
