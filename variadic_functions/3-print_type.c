#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @args: arguments to prints
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print a int
 *
 * @args: arguments to print
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 *
 * @args: arguments to prints
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string  - print a string
 *
 * @args: arguments to print
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
