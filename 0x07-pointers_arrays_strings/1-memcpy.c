#include "main.h"

/**
 *_memcpy - function that copies a memory area
 *
 *@dest: buffer
 *@src: area where memory will be copied from
 *@n: number of bytes of memory copied
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k <= n; k++)
{
putchar(src[k]);
}
dest = src[k];

return (dest);
}
