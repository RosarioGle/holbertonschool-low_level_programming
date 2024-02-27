#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: Always 0.
 * @n:variable
 */
void print_diagonal(int n)
{
int dia;

for (dia = 0; dia < n; dia++)
{
_putchar(' ');
}
_putchar(' ');
_putchar('N');
_putchar('\n');
}
