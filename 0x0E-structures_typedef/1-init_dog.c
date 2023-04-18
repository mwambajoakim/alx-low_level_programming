#include "dog.h"
#include <stdio.h>
#include <stdlib>



/**
 * init_dog - function that initializes struct dog
 * @d: pointer of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
return;
}
