#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string
*
* @dest:variable
* @src:variable
* @n:variable
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
int lon = 0;
int i;
while (src[i++])
lon++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = lon; i < n; i++)
dest[i] = '\0';
return (dest);
}
