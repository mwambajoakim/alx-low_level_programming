#include "main.h"

/**
 * *_strcpy - copies a string
 * @dest:array to be copied to
 * @src:string to be copied
 * Return: value returned dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
