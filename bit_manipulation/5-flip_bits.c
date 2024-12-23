#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	num = (n & 1) ^ (m & 1);
	if (n == m)
		return (num);
	return (num + flip_bits(n >> 1, m >> 1));
}
