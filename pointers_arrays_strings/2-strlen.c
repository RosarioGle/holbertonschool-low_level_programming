#include "main.h"
#include <stdio.h>

/**
 *
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s++)
		len++;
	return (len);
}
