#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: structure dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nli)";
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		else printf("Owner %s\n", d->owner);
	}
}
