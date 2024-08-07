#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	while (haystack)
	{
		while (*haystack == *needle)
		{
			for (a = 0; needle[a]; a++)
			{
				if (haystack[a] != needle[a])
					break;
			}
			if (needle[a] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
