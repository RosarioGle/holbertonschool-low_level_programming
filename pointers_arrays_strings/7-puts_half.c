#include "main.h"
#include <stdio.h>
/**
* puts_half - print half of a string
*
* @str: pointer str
*/
void puts_half(char *str)
{
int len = 0;
int i;
while (str[len])
len++;
i = len / 2;
if ((len % 2) != 0)
i = i + 1;

while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
