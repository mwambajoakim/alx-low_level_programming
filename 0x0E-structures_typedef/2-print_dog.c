#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: struct pointer to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("nil\n");
		}

		if (d->age != '\0')
		{
			printf("Age: %.2f\n", d->age);
		}
		else
		{
			printf("nil\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner; %s\n", d->owner);
		}
		else
		{
			printf("nil\n");
		}
	}
}
