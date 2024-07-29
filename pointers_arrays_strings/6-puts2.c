#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	int len = 0;
	int a;

	while (str[len])
		len++;
	for (a = 0; a < len; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
