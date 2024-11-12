#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the array width
 * @height: the array height
 *
 * Return: the pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **s;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(width * sizeof(int));
		if (s[a] == 0)
		{
			for (; a >= 0; a--)
				free(s[a]);
			free(s);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			s[a][b] = 0;
	}
	return (s);
}
