#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int a, num;

	for (a = 1; a <= 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + 48);
			}
			_putchar(num % 10 + 48);
		}
		_putchar('\n');
	}
}
