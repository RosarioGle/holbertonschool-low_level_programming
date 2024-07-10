#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 *
 * @d: Pointer to the dog structure to be freed
 *
 * This function frees the memory allocated for the name and owner
 * strings, and then frees the dog structure itself
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
