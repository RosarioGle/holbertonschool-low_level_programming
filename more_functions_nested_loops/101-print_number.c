#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to print
 */

void print_number(int n)
{
	unsigned int num;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((num / divisor) % 10 + '0');
		divisor /= 10;
	}
}
