#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: line size
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
