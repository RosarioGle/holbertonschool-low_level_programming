#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

/**
 * _strcpy - Copies a string to a destination buffer.
 *
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - Concatenates all arguments of the program.
 *
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_length += _strlen(av[i]) + 1;
	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
