#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copie a string
 *
 * @dest: destination
 * @src: source
 * @n: number of byte of src
 *
 * Return: copy string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy = 0, len = 0;

	while (src[cpy++])
		len++;
	for (cpy = 0; src[cpy] && cpy < n; cpy++)
		dest[cpy] = src[cpy];
	for (cpy = len; cpy < n; cpy++)
		dest[cpy] = '\0';
	return (dest);
}
