#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c;
	dog_t *d;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
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
		free(d);
		free(d->name);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
		d->name[c] = name[c];
	d->age = age;
	for (c = 0; c <= b; c++)
		d->owner[c] = owner[c];

	return (d);
}
