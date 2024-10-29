#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len])
		len++;
	half = len / 2;
	if  ((len % 2) != 0)
		half = half + 1;
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
