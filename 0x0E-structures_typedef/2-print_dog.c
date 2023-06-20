#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name %s", d->name);
		}
		else
		{
			printf("nil");
		}
			prinf("Age %f", d->age);
		if (d->owner != NULL)
		{
			printf("Owner %s", d->owner);
		}
		else
		{
			printf("nil");
		}
	}
}
