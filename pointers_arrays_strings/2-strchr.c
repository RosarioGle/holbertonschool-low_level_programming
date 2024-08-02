#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer s
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
