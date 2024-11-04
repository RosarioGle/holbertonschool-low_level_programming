#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string
 * @accept: the substring
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (accept[b] == s[a])
					len++;
			}
		}
		else
			return (len);
	}
	return (len);
}
