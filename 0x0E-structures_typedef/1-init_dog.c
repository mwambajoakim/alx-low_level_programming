#include "dog.h"

/**
 * init_dog - a function that initializes a variable of tyoe struct dog
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
