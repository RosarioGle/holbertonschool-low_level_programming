#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees dogs
 * @d: the dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
