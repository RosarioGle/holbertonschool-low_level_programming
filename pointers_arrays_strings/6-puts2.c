#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints one char out of two of a string
* follow by a new line.
*
* @str: pointer str
*/

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len])
	len++;
	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
