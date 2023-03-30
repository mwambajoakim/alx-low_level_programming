#include "main.h"
/**
 *_strcat - funtion that concantanates two strings
 *
 *@dest: string to be tested
 *@src: string to be tested
 *
 *Return: character
 *
 */

char _strcat(char *dest, char *src)
{
char conc;
int k;
for (k = 0; k < '\0'; k++)
conc = dest[k] + src[k];
return (conc);
}
