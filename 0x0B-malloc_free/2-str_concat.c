#include "main.h"

/**
 * _strlen - Gets the length of a string.
 * @str: Pointer to string.
 *
 * Return: Length of string str.
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copies src to dest.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

/**
 * _strcat - Concatenates dest and src.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to concatenated dest string.
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}

/**
 * str_concat - Concatenates string s1 and s2.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Return: Pointer to newly allocated speace in memory with both.
 */

char *str_concat(char *s1, char *s2)
{
	int length;
	char *alloc_mem;

	length = _strlen(s1) + _strlen(s2) + 1;
	alloc_mem = malloc(length * sizeof(char));
	if (alloc_mem == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	_strcpy(alloc_mem, s1);
	_strcat(alloc_mem, s2);
	return (alloc_mem);
}
