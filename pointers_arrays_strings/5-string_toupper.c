#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: the string
 *
 * Return: poitner s
 */

char *string_toupper(char *s)
{
	int len = 0;
	int a;

	while (s[len])
		len++;
	for (a = 0; a < len; a++)
	{
		if ((s[a] >= 97) && (s[a] <= 122))
			s[a] = s[a] - 32;
	}
	return (s);
}
