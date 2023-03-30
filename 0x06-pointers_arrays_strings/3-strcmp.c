#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: char
 * @s2: char
 * Return: m
 */

int _strcmp(char *s1, char *s2)
{
int k = 0, m = 0;

for (; s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0'; k++)

if (s1[k] != s2[k])
m = s1[k] - s2[k];

return (m);
}
