#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - afunction that frees dogs
 * @d: pointer to structure for a dog
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
		free(d->name);
		free(d->owner);
		free(d);
}
