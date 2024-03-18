#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: tableau
 * @size: taille du tableau
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
