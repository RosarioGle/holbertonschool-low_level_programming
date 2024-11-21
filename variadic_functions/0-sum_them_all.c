#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: numbers of parameters
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int result = 0;
	unsigned int a;

	va_start(sum, n);
	if (n == 0)
	{
		va_end(sum);
		return (0);
	}
	for (a = 0; a < n; a++)
		result += va_arg(sum, int);
	va_end(sum);
	return (result);
}
