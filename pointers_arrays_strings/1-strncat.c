#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: numbers of byte of src
 *
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int len = 0;

	while (dest[a++])
		len++;
	for (a = 0; src[a] && a < n; a++)
		dest[len++] = src[a];
	return (dest);
}
