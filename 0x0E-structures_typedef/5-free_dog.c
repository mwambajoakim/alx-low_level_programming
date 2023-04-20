#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free mem allocated to dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
