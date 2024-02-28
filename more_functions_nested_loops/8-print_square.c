#include "main.h"
#include <stdio.h>

/**
* print_square - print a diagonal
*
* @size: number of times for diagonal
*/

void print_square(int size)
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
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
