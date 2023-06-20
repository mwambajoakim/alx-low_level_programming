#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - afunction that frees dogs
 * @d: pointer to structure for a dog
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
