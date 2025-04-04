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

/**
 * dog_t - Tpedef for struct dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
