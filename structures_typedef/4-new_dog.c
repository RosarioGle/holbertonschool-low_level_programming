#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * nem_dog - creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0;
	int c;
	dog_t *d;

	while (name[a])
		a++;
	while (owner[b])
		b++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(a * sizeof(d->name));
	d->age = age;
	d->owner = malloc(b * sizeof(d->owner));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		d->name[c] = name[c];
	d->age = age;
	for (c = 0; c < b; c++)
		d->owner[c] = owner[c];
	return (d);
}
