#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array of chars,
* and initializes it with a specific char.
* @size:variable
* @c:viriable
* Return: Always 0.
*/

char *create_array(unsigned int size, char c)
{
unsigned int a;
char *tbl;

if (size <= 0)
return (NULL);

tbl = malloc(sizeof(char) * size);

if (tbl == 0)
return (NULL);

for (a = 0; a <= size - 1; a++)
tbl[a] = c;

return (tbl);
}
