#include "variadic_functions.h"
#include "3-print_type.c"

/**
 * print_all - function that prints anything.
 *
 * @format: types
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *separator = "";

	pr_t s[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (s[j].pr)
		{
			if (s[j].pr == format[i])
			{
				printf("%s", separator);
				s[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
