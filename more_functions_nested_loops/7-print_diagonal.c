#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: diagonal size
 */

void print_diagonal(int n)
{
	int line = 0;
	int space = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (line < n)
		{
			while (space < line)
			{
				_putchar(32);
				space++;
			}
			_putchar(92);
			_putchar('\n');
			line++;
		}
	}
}
