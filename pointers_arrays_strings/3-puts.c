#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string
*
* @str:varible
*/

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
