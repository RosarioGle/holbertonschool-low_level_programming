#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[a] = '\0';
	return (s);
}
