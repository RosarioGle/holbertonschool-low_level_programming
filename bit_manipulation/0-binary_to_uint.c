#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the number to convert
 *
 * Return: the converted number, or 0 if there is one
 * or more chars in the string b that is not 0 or 1 and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
	return (num);
}
