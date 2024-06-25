#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte (\0)
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string to be copied
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
