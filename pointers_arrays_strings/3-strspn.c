#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s:variable
* @accept:variable
* Return: Always 0.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
len++;
}
}
else
return (len);
}
return (len);
}
