#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Describes a dog.
 * @name: Name of dog.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*DOG_H*/
