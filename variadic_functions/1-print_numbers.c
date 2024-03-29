#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator
 * @n: number of parameters
 * @...: variables parameters
 * Return: sum of all parameters or 0 if n = 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
