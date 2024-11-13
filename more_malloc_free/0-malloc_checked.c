#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the value
 *
 * Return: the pointer a
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == 0)
		exit(98);
	return (a);
}
