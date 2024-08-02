#include "main.h"
#include <stdio.h>

/**
 * leet -  encodes a string
 *
 * @c: pointer
 *
 * Return: result of the function
 */

char *leet(char *c)
{
	int a;
	int b;
	char letter[10] = {'a', 'A', 'e', 'E'
		, 'o', 'O', 't', 'T', 'l', 'L'};
	int num[10] = {'4', '4', '3', '3', '0'
		, '0', '7', '7', '1', '1'};

	for (a = 0; c[a]; a++)
	{
		for (b = 0; b < 11; b++)
		{
			if (c[a] == letter[b])
				c[a] = num[b];
		}
	}
	return (c);
}
