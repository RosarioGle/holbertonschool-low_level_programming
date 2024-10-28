#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int line, chara;

	for (line = 1; line <= size; line++)
	{
		for (chara = 1; chara <= size; chara++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
