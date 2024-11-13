#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the minimum
 * @max: the maximum
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *t;
	unsigned int a;

	if (min > max)
		return (NULL);
	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
	{
		t[a] = min;
		min++;
	}
	return (t);
}
