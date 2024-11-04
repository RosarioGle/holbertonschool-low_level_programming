#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: the square matrix
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int b;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (b = 0; b < size; b++)
	{
		diagonal1 = diagonal1 + *(a + size * b + b);
		diagonal2 = diagonal2 + *(a + size * (b + 1) - b - 1);
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
