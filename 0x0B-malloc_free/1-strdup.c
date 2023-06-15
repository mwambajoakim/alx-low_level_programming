#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer,
 * to a newly allocated  space in memory containing copy of the string,
 * given as a parameter
 *
 * @str: string to be coppied
 * Return: pointer to string
*/

char *_strdup(char *str)
{
	unsigned int length;
	char *strcopy;

	if (str == NULL) /*Checking if string is null*/
	{
	return (NULL);
	}

	length = strlen(str); /*Getting the length of the string in parameter*/

	/**
	* using length to allocate memory
	* for the copy of the string
	* 1 byte is added for the null character
	*/
	strcopy = malloc(length + 1);
	if (strcopy == NULL)
	{
	return (NULL);
	}
	/**
	* copying the contents of str
	* to strcopy
	*/
	strcpy(strcopy, str);
	return (strcopy);
}
