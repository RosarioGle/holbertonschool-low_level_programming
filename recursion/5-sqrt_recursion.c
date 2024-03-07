#include "main.h"

/**
* operation - make the operation to find the root.
* @n:variable
* @root:variable
* Return: Always 0.
*/

int operation(int n, int root)
{
if (root * root == n)
return (root);
else if (root * root < n)
return (operation(n, root + 1));
else
return (-1);
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n:variable
* Return: Always 0.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (operation(n, 1));
}
