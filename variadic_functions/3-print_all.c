#include "variadic_functions.h"

/**
 * print_char - print a character
 *
 * @all: the character to print
 */

void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}

/**
 * print_string - print a string
 *
 * @all: the string to print
 *
 * Return: NULL
 */

void print_string(va_list all)
{
	char *s;

	s = va_arg(all, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_int - print an int
 *
 * @all: the int to print
 */

void print_int(va_list all)
{
	printf("%d", va_arg(all, int));
}

/**
 * print_float - print a float
 *
 * @all: the float to print
 */

void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int a, b;
	char *separator = "";

	ls_t s[] = {
		{'c', &print_char},
		{'i', &print_int},
		{'f', &print_float},
		{'s', &print_string}
	};
	va_start(all, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (s[b].ls)
		{
			if (s[b].ls == format[a])
			{
				printf("%s", separator);
				s[b].f(all);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(all);
	printf("\n");
}
