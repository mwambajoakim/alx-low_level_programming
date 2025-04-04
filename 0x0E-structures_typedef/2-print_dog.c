#include "dog.h"

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to struct.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %d\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : 0.0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
