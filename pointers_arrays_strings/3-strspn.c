#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string to be searched
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The initial segment to be scanned
 * @accept: The list of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = _strchr(accept, *s);
		if (p == NULL)
		break;
		count++;
		s++;
	}
	return (count);
}
