#include "main.h"
#include <stdio.h>

/**
* print_diagonal - print a diagonal
*
* @n: number of times for diagonal
*/

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i = 0;
while (i < n)
{
int esp = 0;
while (esp < i)
{
_putchar(' ');
esp++;
}
 _putchar('\\');
_putchar('\n');
i++;
}
}
}
