#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that defines a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: the struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(doggy));

	if (doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(strlen(name) + 1);
	if (doggy->name == NULL)
	{
		return (NULL);
	}
	strcpy(doggy->name, name);

	doggy->owner = malloc(strlen(owner) + 1);
	if (doggy->name == NULL)
	{
		return (NULL);
	}
	strcpy(doggy->owner, owner);

	doggy->age = age;

	return (doggy);
}
