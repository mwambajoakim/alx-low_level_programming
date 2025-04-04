#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: Pointer to struct dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp_dog;

	tmp_dog = malloc(sizeof(*tmp_dog));
	if (tmp_dog == NULL)
	{
		return (NULL);
	}
	tmp_dog->name = name;
	tmp_dog->age = age;
	tmp_dog->owner = owner;

	return (tmp_dog);
}
