#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: the destination
 * @src: the string
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	char *cpydest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpydest);
}
