#include "main.h"

/**
 * prime - find a prime number
 *
 * @n: the number
 * @r: the result
 *
 * Return: 0 or 1
 */

int prime(int n, int r)
{
	if (n % r == 0)
		return (0);
	else if (r > n / 2)
		return (1);
	else
		return (prime(n, r + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime(n, 2));
}
