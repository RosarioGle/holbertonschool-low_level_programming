#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings
* @s1:variable
* @s2:variable
* Return: Always 0.
*/

char *str_concat(char *s1, char *s2)
{
int a, b;
int len1 = 0;
int len2 = 0;
char *r;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
r = malloc((len1 + len2 + 1) * sizeof(char));
if (r == NULL)
{
free(r);
return (NULL);
}
for (a = 0; s1[a] != '\0'; a++)
r[a] = s1[a];
for (b = 0; s2[b] != '\0'; b++)
{
r[a] = s2[b];
a++;
}
r[a] = '\0';
return (r);
}
