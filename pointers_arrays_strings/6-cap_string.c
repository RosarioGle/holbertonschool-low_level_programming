#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: pointer to the string to be modified.
 *
 * Return: pointer to the modified string.
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;

	char sep[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
	s[i] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				break;
			}
		}
	}
	return (s);
}
