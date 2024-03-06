#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s:variable
* @c:variable
* Return: Always 0.
*/
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return ('\0');
}
