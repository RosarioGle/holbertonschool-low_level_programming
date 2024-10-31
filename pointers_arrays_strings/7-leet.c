#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: the string
 *
 * Return: the pointer c
 */

char *leet(char *s)
{
	int a, b;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; s[a]; a++)
	{
		for (b = 0; b < 11; b++)
		{
			if (s[a] == letter[b])
				s[a] = encode[b];
		}
	}
	return (s);
}

