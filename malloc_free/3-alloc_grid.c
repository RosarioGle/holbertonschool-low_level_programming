#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width:variable
* @height:variable
* Return: Always 0.
*/

int **alloc_grid(int width, int height)
{
int a, b;
int **p;

if ((width <= 0) || (height <= 0))
return (NULL);
p = malloc(height * sizeof(int*));
if (p == 0)
return (NULL);
for (a = 0; a < height; a++)
{
p[a] = malloc(width * sizeof(int));
if (p[a] == 0)
{
for (; a >= 0; a--)
free(p[a]);

free(p);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
p[a][b] = 0;
}
return (p);
}
