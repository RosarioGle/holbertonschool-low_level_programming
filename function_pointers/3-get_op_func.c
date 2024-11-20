#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 *
 * @s: the operator passed as argument
 *
 * Return: the function that corresponds to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int a = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (a < 5)
	{
		if (s[0] == ops[a].op[0])
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
