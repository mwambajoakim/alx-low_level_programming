#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *
 *@s: string to be checked
 *@c: character to be checked
 *
 *Return: pointer to occerence of character
 */

char *_strchr(char *s, char c)
{
int g;
for (g = 0; *(s + g); g++
{
if (c == *(s + g))
       
return (s + g);
 
}
if (s[g] == c)
return (s +g);
}
