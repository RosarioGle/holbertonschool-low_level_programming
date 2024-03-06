#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack:variable
* @needle:variable
* Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack)
{
for (i = 0; *(needle + i); i++)
if (*(needle + i) != *(haystack + i))
break;
if (!*(needle + i))
return (haystack);
haystack++;
}
return ('\0');
}
