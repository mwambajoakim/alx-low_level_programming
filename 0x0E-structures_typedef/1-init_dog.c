#include "dog.h"

/**
 * init_dog - function that initializes a variable of struct dog
 *
 * @d: struct pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
