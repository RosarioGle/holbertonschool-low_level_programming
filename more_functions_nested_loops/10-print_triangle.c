#include "main.h"
#include <stdio.h>

/**
* print_triangle - print a triangle
*
* @size: number of times for triangle
*/

void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
if (j < (size - (i + 1)))
_putchar(32);
else
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
