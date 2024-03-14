#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b:variable
* Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
int *s;

s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
