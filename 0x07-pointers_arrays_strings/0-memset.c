#include "main.h"

/**
 * _memset - function that will fill a memory with a constant byte
 * 
 * @s: buffer where memory will be copied
 * @b: where bytes will be obtained
 * @n: number of bytes to be copied
 * 
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for ( k = 0; k < n; k++)
{
	s[k] = b[k]
}
return (s);

}