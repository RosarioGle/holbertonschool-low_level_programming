#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0;
	int a = 0;
	int b = 0;
	char c;

	while (s[len])
		len++;
	for (a = len - 1; a >= len / 2; a--)
	{
		c = (s[a]);
		(s[a]) = (s[b]);
		(s[b]) = c;
		b++;
	}
}
