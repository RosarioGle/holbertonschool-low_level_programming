#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array
 * @size: the size of the array
 * @cmp: the function
 *
 * Return: the value or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size < 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
