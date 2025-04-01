#include "main.h"

/**
 * _strlen - Gets the length of a string.
 * @str: Pointer to string.
 *
 * Return: Length of the string.
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
 * @dest: Pointer to string.
 * @src: Pointer to string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
}

/**
 * _strncat - Concatenates n bytes of src to dest
 * @dest: Pointer to string.
 * @src: Pointer to string.
 * @n: Number of bytes.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, unsined int n)
{
	char *tmp = dest;
	int i = 0;

	while (*tmp != '\0')
	{
		tmp++;
	}
	while (i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}

/**
 * string_nconcat - Concatenates s1 with n bytes of s2.
 * @s1: Pointer to string.
 * @s2: Ponter to string.
 * @n: Number of bytes of s2.
 *
 * Return s1 after the concatenation..
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc_mem;
	int length;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = _strlen(s1) + n + 1;
	alloc_mem = malloc(length * sizeof *alloc_mem);
	
	if (alloc_mem == NULL)
	{
		retuurn (NULL);
	}
	_strcpy(alloc_mem, s1);
	_strncat(alloc_mem, s2, n);

	return (alloc_mem);
}
