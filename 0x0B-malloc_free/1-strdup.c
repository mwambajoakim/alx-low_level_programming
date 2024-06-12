#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *_strlen - function that returns length of string
 *
 *@str: pointer to string
 *
 *Return: length of string
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
 *_strdup - function that returns pointer to newly allocated space
 *
 *@str: pointer to string
 *
 *Return: pointer to string
 */

char *_strdup(char *str)
{
	unsigned int i, size = _strlen(str) + 1;
	char *dup;

	dup = (char *)malloc(size * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
