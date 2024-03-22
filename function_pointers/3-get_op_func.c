#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perfom
 * the operation asked by the user
 * @s: operator passed as argument
 * Return: a pointer to the function that corresponds to
 * the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (a < 5)
	{
		if (s[0] == ops[a].op[0])
			return (ops[a].f);
		a++;
	}

	return (NULL);
}
