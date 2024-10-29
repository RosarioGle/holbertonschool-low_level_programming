#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int len = 0;
	int a;
	int c = 0;
	char cpy;

	while (s[len])
		len++;
	for (a = len - 1; a >= len / 2; a--)
	{
		cpy = s[a];
		s[a] = s[c];
		s[c] = cpy;
		c++;
	}
}
