#include "dog.h"

/**
 * free_dog - Frees struct dog.
 * @d: Pointer to struct.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
