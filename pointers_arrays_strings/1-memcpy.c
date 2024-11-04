#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area
 * @src: memory area to copy
 * @n: bytes from memory area src
 *
 * Return: the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
