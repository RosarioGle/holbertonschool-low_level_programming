#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @args: arguments to prints
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print a int
 *
 * @args: arguments to print
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float
 *
 * @args: arguments to prints
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string  - print a string
 *
 * @args: arguments to print
 */

void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
