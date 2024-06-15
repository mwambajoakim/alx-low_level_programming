#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcat - function that concatenates strings
 *
 *@s1: pointer to string
 *@s2: pointer  to string 2
 *
 *Return: pointer to string
 */

char *_strcat(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
	}
	
	return (s1);
}

/**
 *_strcpy - function that copies a string
 *
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *
 *Return: pointer to string
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}

	return (s1);
}

/**
 *_strlen - function that gets the length of a string
 *
 *@str: pointer to string
 *
 *Return: string length
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 *str_concat - function that concatenates two strings
 *
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *
 *Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size = _strlen(s1) + _strlen(s2) + 1;
	char *conc;

	conc = (char *)malloc(size * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	_strcpy(conc, s1);
	_strcat(conc, s2);

	return (conc);
}
