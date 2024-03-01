#include "main.h"
#include <stdio.h>

/**
* *_strcat - concatenates two strings
*
* @dest:variable
* @src:variable
* Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int i = 0, len = 0;
while (dest[i++])
len++;
for (i = 0; src[i]; i++)
dest[len++] = src[i];
return (dest);
}
