#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to a new string or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int a;
	int len = 0;
	char *s;

	if (str == 0)
		return (NULL);
	while (str[len])
		len++;
	s = malloc((len) * sizeof(char));
	if (s == 0)
		return (NULL);
	for (a = 0; a <= len - 1; a++)
		s[a] = str[a];
	return (s);
}
