#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int i1 = *a;
	int i2 = *b;

	*a = i2;
	*b = i1;
}
