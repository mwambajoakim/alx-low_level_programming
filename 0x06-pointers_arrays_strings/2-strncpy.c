#include "main.h"

/**
 *_strncpy - function that copies a string to another
 *
 *@dest: string to be tested
 *@src: string to be tested
 *@n: amount of characters to copy
 *
 *Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int k;
for (k = 0; k < n && src[k] != '\0'; k++)
{
dest[k] = src[k];
}
for (; k < n; k++)
{
dest[k] = '\0';
}
return (dest);
}
