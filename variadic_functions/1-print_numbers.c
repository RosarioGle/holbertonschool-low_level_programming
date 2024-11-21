#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int a;

	va_start(number, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(number, int));
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(number);
	printf("\n");
}
