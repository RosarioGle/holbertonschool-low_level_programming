#include "main.h"
/**
 * print_line - draws a straight lina in the terminal
 * Return: Always 0.
 * @n:variable
 */
void print_line(int n)
{
int m;

for (m = 0; m < n; m++)
{
_putchar('_');
}
_putchar('\n');
}
