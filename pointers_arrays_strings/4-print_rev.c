#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: the string
 */

void print_rev(char *s)
{
	int len = 0;
	int a;

	while (s[len])
		len++;
	for (a = len - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
