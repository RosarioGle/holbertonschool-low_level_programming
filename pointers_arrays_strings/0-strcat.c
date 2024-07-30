#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, len = 0;

	while (dest[a++])
		len++;
	for (a = 0; src[a]; a++)
		dest[len++] = src[a];
	return (dest);
}
