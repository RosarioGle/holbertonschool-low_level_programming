#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number
 * @index: the index
 *
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}
