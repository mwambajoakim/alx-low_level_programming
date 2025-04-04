#include "main.h"

/**
 * init_dog - Initializes struct dog.
 * @d: Pointer to struct.
 * @name: Pointer to name.
 * @age: Dog's age.
 * @owner: Pointer to owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
