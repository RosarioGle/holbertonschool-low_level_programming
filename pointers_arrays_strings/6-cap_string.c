#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @c: the string
 *
 * Return: the pointer c
 */

char *cap_string(char *c)
{
	int a, b;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!'
		, '?', '"', '(', ')', '{', '}'};

	for (a = 0; c[a] != '\0'; a++)
	{
		if (a == 0 && c[a] >= 97 && c[a] <= 122)
			c[a] = c[a] - 32;
		for (b = 0; sep[b] != '\0'; b++)
		{
			if (c[a] == sep[b])
			{
				if (c[a + 1] >= 97 && c[a + 1] <= 122)
					c[a + 1] = c[a + 1] - 32;
			}
		}
	}
	return (c);
}
