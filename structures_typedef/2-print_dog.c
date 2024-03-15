#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: structure dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}
