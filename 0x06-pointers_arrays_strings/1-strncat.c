#imclude "main.h"

/**
 *_strncat - function that concatenates two strings
 *
 *@dest: string to be tested
 *@src: string to be tested
 *
 *Return: a character
 */

char *_strncat(char *dest, char *src, int n)
{
int k;
for (k = 0; k < n && src[k] != '\0'; k++)
dest = dest[k] + src[k];
for (; k < n; k++)
dest[k] = '\0';
return (dest);
}
