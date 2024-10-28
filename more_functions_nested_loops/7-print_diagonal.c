#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: diagonal size
 */

void print_diagonal(int n)
{
	int line = 0;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (line < n)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			line++;
		}
	}
}
