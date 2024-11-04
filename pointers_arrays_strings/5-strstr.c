#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the string
 * @needle: the substring
 *
 * Return: the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *cpy;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			cpy = haystack;
			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
				{
					return (cpy);
				}
			}
			needle = needle - (haystack - cpy);
			haystack = cpy + 1;
		}
		else
		{
			haystack++;
		}
	}
	return ('\0');
}
