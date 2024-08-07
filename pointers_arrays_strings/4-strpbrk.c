#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: substring
 *
 * Return: the pointer s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	for (; *s; s++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	}
	return ('\0');
}
