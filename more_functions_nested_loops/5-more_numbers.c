#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int numb;
	int line;

	for (line = 1; line <= 10; line++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
			{
				_putchar((numb / 10) + '0');
			}
			_putchar((numb % 10) + '0');
		}
		_putchar('\n');
	}
}

