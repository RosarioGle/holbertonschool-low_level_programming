#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int column, line;

	for (column = 0; column < 8; column++)
	{
		for (line = 0; line < 8; line++)
		{
			_putchar((*(a + column))[line]);
		}
		_putchar('\n');
	}
}
