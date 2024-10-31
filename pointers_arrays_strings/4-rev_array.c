#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array
 * @n: numbers of elements
 */

void reverse_array(int *a, int n)
{
	int b;
	int c = 0;
	int cpy;

	for (b = n - 1; b >= n / 2; b--)
	{
		cpy = a[b];
		a[b] = a[c];
		a[c] = cpy;
		c++;
	}
}
