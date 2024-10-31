#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @src: the string
 * @dest: the destination
 * @n: numbers of bytes
 *
 * Return: the copy of the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int len = 0;

	while (src[a])
	{
		len++;
		a++;
	}
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];
	for (a = len; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
