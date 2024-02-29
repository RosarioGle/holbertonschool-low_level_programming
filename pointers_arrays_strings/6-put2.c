#include "main.h"

/**
* puts2 - prints every other character of a string
*
* @str:varible
*/

void puts2(char *str)
{
int len = 0;
int i;
while (str[len])
len++;
for (i = 0; i < len; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
}
_putchar('\n');
}
