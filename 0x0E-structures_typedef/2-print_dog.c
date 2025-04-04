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
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->age <= 0.0)
		{
			printf("Age: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		return;
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

	}
}
