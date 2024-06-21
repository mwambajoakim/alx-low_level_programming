#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcat - function that concatenates strings
 *
 *@dest: pointer to string
 *@src: pointer  to string 2
 *
 *Return: pointer to string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;


	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest = '\0';
	return (dest);
}

/**
 *_strcpy - function that copies a string
 *
 *@src: pointer to string 1
 *@dest: pointer to string 2
 *
 *Return: pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	

	_strcpy(conc, s1);
	_strcat(conc, s2);

	return (conc);
}
