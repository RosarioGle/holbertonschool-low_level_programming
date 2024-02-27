#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: Always 0.
 * @n:variable
 */
void print_diagonal(int n)
{
int dia, spc;
if (n > 0)
{
for (dia = 0; dia < n; dia++)
{
for (spc = 0; spc < dia; spc++)
_putchar(' ');
_putchar('\\');

if (dia == n - 1)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
