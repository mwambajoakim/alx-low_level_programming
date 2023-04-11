#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: amount of bytes used from src
 * Return: return value dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
