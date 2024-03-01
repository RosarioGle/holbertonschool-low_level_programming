#include "main.h"
#include <stdio.h>

/**
* *_strncat - concatenates two strings
*
* @dest:variable
* @src:variable
* @n:variable
* Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;
while (dest[i++])
len++;
for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];
return (dest);
}
