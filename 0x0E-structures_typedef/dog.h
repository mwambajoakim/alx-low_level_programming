#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of the structure
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
