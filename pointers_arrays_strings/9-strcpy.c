#include "main.h"
#include <stdio.h>

/**
* *_strcpy - copy all the data from src and dest.
*
* @dest: destination
*
* @src: source
*
* Return: retun the copy pointer.
*/

char *_strcpy(char *dest, char *src)
{
char *newdest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (newdest);
}
