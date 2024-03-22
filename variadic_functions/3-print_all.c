#include "variadic_functions.h"
#include "3-print_functions.c"

/**
 * print_all - function that prints anything.
 *
 * @format: types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int a, b;
	char *separator = "";

	type_t style[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	a = 0;

	while (format && format[a])
	{
		b = 0;
		while (style[b].type)
		{
			if (style[b].type == format[a])
			{
				printf("%s", separator);
				style[b].f(args);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(args);
	printf("\n");
}
