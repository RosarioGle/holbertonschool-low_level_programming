#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string
* for any of a set of bytes
* @s:variable
* @accept:variable
* Return: Always 0.
*/

char *_strpbrk(char *s, char *accept)
{
int j;
for (; *s; s++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
}
return ('\0');
}
