#include "main.h"


/**
 * operation - find the root of a number
 *
 * @n: the number
 * @root: the root of the number
 *
 * Return: the result
 */

int operation(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	else
		return (operation(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (operation(n, 1));
}
