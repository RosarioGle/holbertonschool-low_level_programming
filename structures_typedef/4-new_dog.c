#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *d;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(i * sizeof(d->name));
	d->age = age;
	d->owner = malloc(j * sizeof(d->owner));
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
	for (k = 0; k <= i; k++)
		d->name[k] = name[k];
	d->age = age;
	for (k = 0; k <= j; k++)
		d->owner[k] = owner[k];
	return (d);
}
