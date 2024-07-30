#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed to by src
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}
