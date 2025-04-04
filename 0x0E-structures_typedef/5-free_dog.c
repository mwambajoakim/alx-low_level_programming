#include "dog.h"

/**
 * free_dog - Frees struct dog.
 * @d: Pointer to struct.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	free(d);
}
