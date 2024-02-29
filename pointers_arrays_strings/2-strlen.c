#include "main.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
*
* @s:varible
*
* Return: return the length
*/

int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
