#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @n: number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int a = 0;
	int b = 48;
	int c = n % 10;

	if (c < 0)
		c = -c;
	if (a != c)
	{
		while (a != c)
		{
			a++;
			b++;
			if (a == c)
				_putchar(b);
		}
	}
	else
		_putchar(b);
	return (c);
}
