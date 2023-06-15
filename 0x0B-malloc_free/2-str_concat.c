#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - a function that concatenates twos trings
* @s1: first string
* @s2: second string
* Return: new string
*/

char *str_concat(char *s1, char *s2)
{
	int g, h, length1, length2, length;
	char *news1s2;

	/*Get length of first string*/
	while (s1 != NULL)
	{
	length1++;
	}

	/*Get length of second string*/
	while (s2 != NULL)
	{
	length2++;
	}
	length = length1 + length2;

	/*Allocate memory through the sum of both*/
	news1s2 = malloc((length + 1) * sizeof(char));

	if (news1s2 == NULL)
	return (NULL);

	/*Copy contents of s1 to new string*/
	for (g = 0; g < length1; g++)
	{
	news1s2[g] = s1[g];
	}

	/*Add contents of s2 to new string*/
	for (h = 0; h < length2; h++, g++)
	{
	news1s2[g] = s2[h];
	}
	news1s2[length] = '\0';

	return (news1s2);
}
