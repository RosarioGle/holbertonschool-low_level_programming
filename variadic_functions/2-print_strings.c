#include "variadic_functions.h"

/**
 * print_strings - prints a strings
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int a;
	char *s;

	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}

