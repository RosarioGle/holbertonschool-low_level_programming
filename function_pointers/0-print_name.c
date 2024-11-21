#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: the name
 * @f: the functions
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
