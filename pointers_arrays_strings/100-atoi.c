#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the string
 *
 * Return: value or 0
 */

int _atoi(char *s)
{
	int neg_pos = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			neg_pos *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * neg_pos);
}
