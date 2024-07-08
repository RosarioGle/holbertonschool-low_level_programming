#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 * was available or str is NULL.
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];
	dup_str[len] = '\0';
	return (dup_str);
}
