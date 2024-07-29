#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0;
	int a = 0;

	while (s[len])
		len++;
	for (a = len - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
