#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int len = 0;
	int a;

	while (str[len])
		len++;
	a = len / 2;
	if ((len % 2) != 0)
	a = a + 1;
	while (a < len)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
