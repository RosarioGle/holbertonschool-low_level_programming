#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if memory was insufficient
 */

char *_strdup(const char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
