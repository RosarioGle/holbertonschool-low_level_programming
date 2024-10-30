#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: the first string
 * @dest: the second string
 * @n: bytes from src
 *
 * Return: pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int a = 0;

	while (dest[a])
	{
		a++;
		len++;
	}
	for (a = 0; src[a] && a < n; a++)
		dest[len++] = src[a];
	return (dest);
}
