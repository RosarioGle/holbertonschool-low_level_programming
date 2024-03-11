#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup -  returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str:variable
* Return: Always 0.
*/

char *_strdup(char *str)
{
int a;
int len = 0;
char *tbl;

if (str == 0)
return (NULL);

while (str[len] != 0)
len++;
tbl = malloc(len *sizeof(char));

if (tbl == 0)
return (NULL);

for (a = 0; a <= len - 1; a++)
tbl[a] = str[a];

tbl[len] = '\0';

return (tbl);
}
