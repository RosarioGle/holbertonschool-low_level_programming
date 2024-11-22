#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct ls - struct ls
 * @ls: the type
 * @f the functions
 */

typedef struct ls
{
	char ls;
	void (*f)(va_list);
} ls_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list all);
void print_int(va_list all);
void print_float(va_list all);
void print_string(va_list all);

#endif
