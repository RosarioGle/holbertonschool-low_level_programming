#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 * Return: result of the function
 */

char *cap_string(char *s)
{
	int a;
	int b;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"'
		, '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
		for (b = 0; sep[b] != '\0'; b++)
		{
			if (s[a] == sep[b])
			{
				if (s[a + 1] >= 97 && s[a + 1] <= 122)
					s[a + 1] = s[a + 1] - 32;
			}
		}
	}
	return (s);
}
