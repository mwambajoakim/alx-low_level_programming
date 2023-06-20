#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	if (newd)
	{
	newd->name = name;
	newd->age = age;
	newd->owner = owner;
	}
	return (newd);
}