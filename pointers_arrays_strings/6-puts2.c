#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string
 */

void puts2(char *str)
{
	int len = 0;
	int n;

	while (str[len])
		len++;
	for (n = 0; n < len; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
