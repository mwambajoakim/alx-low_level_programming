#include "dog.h"

/**
 * _strlen - Checks for length of a string.
 *
 * @str: Pointer to string.
 *
 * Return: Length of string str.
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * _strdup - Points to a newly allocated space in memory
 * containing the string that is a duplicate of str.
 *
 * @str: Pointer to string.
 *
 * Return: Pointer to string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(char) * length);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to name.
 * @age: Age of dog.
 * @owner: Pointer to owner.
 *
 * Return: Pointer to struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *tmp_dog = malloc(sizeof(dog_t));

if (!tmp_dog)
	return (NULL);

tmp_dog->name = name ? strdup(name) : strdup("");
tmp_dog->owner = owner ? strdup(owner) : strdup("");

if (!tmp_dog->name || !tmp_dog->owner)
{
	free(tmp_dog->name);
	free(tmp_dog->owner);
	free(tmp_dog);
	return (NULL);
}

tmp_dog->age = age;
return (tmp_dog);
}

