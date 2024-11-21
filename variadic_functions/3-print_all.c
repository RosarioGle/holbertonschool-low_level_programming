#include "variadic_functions.h"

void print_char(va_list all)
void print_string(va_list all)
void print_int(va_list all)
void print_float(va_list all)

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list all;
