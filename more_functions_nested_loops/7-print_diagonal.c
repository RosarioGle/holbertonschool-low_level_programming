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
for (spc = 0; spc < n; spc++)
{
for (dia = 0; dia < spc; dia++)
_putchar(' ');
_putchar('\\');
}
_putchar('\n');
}
}
