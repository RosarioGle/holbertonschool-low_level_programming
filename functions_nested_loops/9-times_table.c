#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) < 10)
			{
				if (b > 0)
				{
					_putchar(32);
					_putchar((a * b) + 48);
				}
				else
					_putchar((a * b) + 48);
			}
			else
			{
				_putchar((a * b) / 10 + 48);
				_putchar((a * b) % 10 + 48);
			}
			if (b < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
