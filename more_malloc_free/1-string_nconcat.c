#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the first value of s2
 *
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, a;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
		len++;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	len = 0;
	for (a = 0; s1[a]; a++)
	{
		s[len] = s1[a];
		len++;
	}
	for (a = 0; s2[a] && a < n; a++)
	{
		s[len] = s2[a];
		len++;
	}
	s[len] = '\0';
	return (s);
}
