#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;
	int d;

	for (b = n - 1; b >= n / 2; b--)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
		c++;
	}
}
