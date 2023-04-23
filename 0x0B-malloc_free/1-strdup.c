#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - A function that copies a string
 * @str: string to copy
 * Return: a pointer to the string or NULL if empty
 */

char *_strdup(char *str)
{
	size_t length;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	str1 = (char *)malloc(length + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}
	strcpy(str1, str);
	return (str1);
}
