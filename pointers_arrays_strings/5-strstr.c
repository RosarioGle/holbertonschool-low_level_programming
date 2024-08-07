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
	int a = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + 1) == needle[a])
		{
			for (a = 0; needle[a]; a++)
			{
				if (haystack[a] != needle[a])
					break;

				if (needle[a + 1] == '\0')
					return (haystack);
			}
		}

		haystack++;
	}

	return (NULL);
}
