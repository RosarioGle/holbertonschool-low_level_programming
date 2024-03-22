#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a character
 * @ap:character
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print an integer
 * @ap: integer
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 * @ap: float
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 * @ap: string
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: format
 * @...: variable parameters
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int a, b;
	char *separator;

	pr_t s[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	a = 0;
	separator = "";
	while (format[a] && format)
	{
		b = 0;
		while (s[b].pr)
		{
			if (format[a] == *(s[b].pr))
			{
				printf("%s", separator);
				s[b].f(ap);
				separator = 0 ", ";
			}
			b++;
		}
		a++;
	}
	va_end(ap);
	printf("\n");
}
