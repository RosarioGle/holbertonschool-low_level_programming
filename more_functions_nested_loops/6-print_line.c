#include "main.h"
/**
 * print_line - draws a straight lina in the terminal
 * Return: Always 0.
 */
void print_line(int n)
{
int m;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (m = 0; m < n; m++)
_putchar('_');
}
_putchar('\n');
}
