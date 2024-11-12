#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: the size of the array
 * @c: the character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *t;

	if (size == 0)
		return (NULL);
	t = malloc(size * sizeof(char));
	if (t == 0)
		return(NULL);
	for (b = 0; b <= size - 1; b++)
		t[b] = c;
	return(t);
}
