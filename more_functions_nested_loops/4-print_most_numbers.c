#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if ((num != 50) && (num != 52))
		{
			_putchar(num);
			num++;
		}
		else
			num++;
	}
	_putchar('\n');
}
