#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * struct type - Struct type
 *
 * @type: the type
 * @f: the function associated
 */

typedef struct type
{
	char type;
	void (*f)(va_list);
} type_t;

#endif
