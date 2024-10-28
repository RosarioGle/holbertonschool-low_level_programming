#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: triangle size
 */

void print_triangle(int size)
{
	int line, space, chara;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 1; space <= size - line; space++)
			{
				_putchar(32);
			}
			for (chara = 1; chara <= line; chara++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
