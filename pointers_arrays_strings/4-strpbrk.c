#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string
 * @accept: the substring
 *
 * Return:  a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		s++;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	}
	return ('\0');
}
