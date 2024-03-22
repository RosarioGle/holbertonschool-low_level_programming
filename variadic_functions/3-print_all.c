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
	int i, j;
	char *separator = "";

	type_t style[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (style[j].type)
		{
			if (style[j].type == format[i])
			{
				printf("%s", separator);
				style[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
