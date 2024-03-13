#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array
* @nmemb:variable
* @size:variable
* Return: Always 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int a;

if ((nmemb == 0) || (size == 0))
return (NULL);

s = malloc(nmemb * size);

if (s == NULL)
return (NULL);

for (a = 0; a < (nmemb * size); a++)
s[a] = 0;
return (s);
}
