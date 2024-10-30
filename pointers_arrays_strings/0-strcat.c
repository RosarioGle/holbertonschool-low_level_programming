#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: the first string
 * @dest: the second string
 *
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int a = 0;

	while (dest[a])
	{
		a++;
		len++;
	}
	for (a = 0; src[a]; a++)
		dest[len++] = src[a];
	return (dest);
}
